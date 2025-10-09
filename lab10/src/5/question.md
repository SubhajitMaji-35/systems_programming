Printing color images using a dot-matrix printer 
================================================

#### Summary

The goal of this exercise is to build a program that takes in a color
image and gives another image that can be printed by a printer using a printer
with only a limited set of colors. Here is an (extreme) use case for this
program: suppose you have a dot-matrix printer where you don't have an option
of obtaining a gray or even off-white colors. In this situation, can we print
so that final outcome is as close to the original as possible ?

The exercise starts with a few essential information on images that can be
represented in in plain text -- namely the Portable PixMap format (PPM).

#### How is an image described ?

An image is composed of many pixels. A pixel is the smallest unit of an
image. Each pixel is determined by three quantities usually called as
RGB value standing for Red, Green and Blue which are three non-negative
integers. Following is an image in PPM format.

``` ppm
P3
4 4
255
0  0  0    0  0  0    0  0  0   255  0 255
0  0  0    0 255  7    0  0  0    0  0  0
0  0  0    0  0  0    0 255  7    0  0  0
255 0 255    0  0  0    0  0  0    0  0  0
```

Copy the above contents in a file named `image.ppm` and open the folder in GUI
and double click on the image to see the contents. The image is very small and
you may need to zoom it 500x using your image viewer software.

#### Structure of a PPM file

We now describe what are the different parts of the PPM file starting with the
example above.

The first line is the magic string denoting the type of PPM file. The
two numbers `4 4` in the second line are the number of columns and rows
of the image (in pixels). The third line `255` represents the maximum
value of the color.

Following this, there are triplets of values denoting RGB values of the
pixel. Note that "0 0 0" is black, "255 255 255" is white. All colors
in between can be captured this way. In total, there are 4 x 4
triplets. Now that we understand the format, we are ready for the
exercise.

### Question 1
(Warm up) In this exercise, you will create a file named `readppm.c`.
The exercise is split as two questions (a) and (b).

(a) In this part, add code to `readppm.c` to read an image in the PPM format of
the file named `aep.ppm` in the `images` folder and print out the image in the
PPM format as a file named `out.ppm`. This means that you need to verify the
correctness of input data and then print out the same as per the format. 

You should create appropriate stuct object RBG to do the processing such that
if the variable `pixel` is of type RBG, the corresponding RBG values will be
given by `pixel.r`, `pixel.b` and `pixel.g`.

(b) In this part, we show how to do the same for a large image files and visually
see the output of the image. 

``` bash
./readppm  aep.ppm  out.ppm
```

The above command will cause the program to read the input from `aep.ppm` and
give the output to `out.ppm`. Modify the program in part (a) to read the file
names as command line arguments.  Now using GUI, open the folder containing the
files and double-click on it to view the image. Both images should be
identical. 


### Question 2
Consider the task of printing the color image. Since color prints can be
costly, we want to print the image in black and white. In this part, we
will modify the program in part 1 to do this. Copy
`readppm.c` as `bwprint.c` and modify it to performs the following task.

(a) Implement a function that does a print using dot-matrix printer. To do
this, we go over all the pixels and check if the average RGB value of pixel is
more than 128 or not. If it is, we output "128 128 128" otherwise, we output "0
0 0" as the pixel value where "0 0 0" corresponds to black color.

(b) Now steps in Question 1(b) to test the output of your program on all the ppm
files given. Make sure that you have tested on `david.ppm` and `babboon.ppm`.

### Question 3
By now you would have observed that the resulting image obtained does not look
very good as expected since we are capturing a colour image with just one color
(without even using shades of black). We will try to improve this using 
some more colors. To do this, copy `bwprint.c` as `betterbwprint.c` which
does the following. The purpose is to obtain an image that looks closer to the
actual one but uses very less colors.

Consider the following slightly more involves strategy. Suppose that the input
image is stored in a two dimensioanl array RBG named `pixels`.

**Pseudocode**

``` pseudocode

1. for each y from top to bottom do
2.    for each x from left to right do

3.        oldpixel := pixels[x][y]
4.        newpixel := find_closest_palette_color(oldpixel)
5.        pixels[x][y] := newpixel
6.        quant_error := oldpixel - newpixel
7.
8.        pixels[x + 1][y    ] := pixels[x + 1][y    ] + (quant_error × 7 / 16)
9.        pixels[x - 1][y + 1] := pixels[x - 1][y + 1] + (quant_error × 3 / 16)
10.       pixels[x    ][y + 1] := pixels[x    ][y + 1] + (quant_error × 5 / 16)
11.       pixels[x + 1][y + 1] := pixels[x + 1][y + 1] + (quant_error × 1 / 16)

```

In the above pseudocode, lines 6, 8-11 performs operations on a pixel. The +/-
operations peforms a componenetwise addition/subtraction of the the RBG values.

While writing the code, make sure that memory outside of the array is not
accessed. We now describe how the function `find_closest_palette_color` which
takes in a pixel and returns a pixel closest the smaller set of colors that we
are allowed to use in printing.

To ensure that we use less colors, we use only 5 values {0, 64, 128, 192, 255}
as valid values for RBG. This means that we allow `5*5*5 = 125` different color
values. To find the closest palette color, we find the Eucledian distance (by
treating each pixel as a vector in R^3) between the color given as argument
with the 216 colors and returns the one for which the distance is minimum.

(a) Implement this strategy to get a better image. Test on `david.ppm` and
`baboon.ppm`. Then, test on all the remaining images.
(b) Run valgrind on your inputs and make sure that there are no memory leaks or
invalid memory accesses.
(c) Write a makefile appopriately (with necessary rules) so that the building
and leaks testing can be automated.

You may be still unhappy with the images ! In this case, instead of using 5
values in `find_closest_palette_color`, increase it to 10 or 20 values (evenly
spaced from 0 to 255) and see the results
