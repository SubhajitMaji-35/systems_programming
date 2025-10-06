# Instructions

* In `lab05` folder, you will find 10 folders with the names 1 to 10.

* Each folder has a .c file with the same name as the folder, a `test` directory
  and a `makefile`. The .c file already contains the necessary instructions to
  fill it. In particular, modify only the parts mentioned in the file.

* Read the question number i below and start editing the i.c file in folder i.
  That is, question number 1 needs to answered in `1/1.c`, question number 2
  needs to be answered in `2/2.c` and so on.

* You can compile the .c file by running `$ make`. Any errors/warnings will be
  displayed here. You must change the .c file so that no errors or warning is
  displayed.

* To test your program, cd to the directory for the question and run `$ make
  tests`. It will show which all test cases passed and which all failed.

* Repeat the above till all the test cases have passed. Then, move on to the
  next question.

# Questions

1. Write a simple calculator in C program. It should be able to add, subtract,
   multiply any two numbers input by the user.

2. Write a C program that takes the length and breadth of a rectangle as input
   and prints its area and perimeter upto three decimal places. If a value
   entered is negative, the program should output "Invalid Input"

3. Write a C program that takes an integer as input, and display whether this
   integer is negative, positive or zero.

4. Write a C program that takes as input integer coefficients of the quadratic
   equation ax^2 + bx + c = 0 and prints if the roots are complex or real.

5. Write a C program that takes an integer as input and checks if it is
   divisible by 17.

6. Write a C program that takes a non-negative integer as input and checks if
   it is a power of 3. 

7. Write a C program that takes two integers a and b as input and display
   whether a < b, a = b, or a > b.

8. Write a C program that takes a non-negative integer as input and prints the
   sum of its digits. 

9. Write a C program that takes a floating-point value as input and prints its
   absolute value. The value should be rounded to 5 decimal places. By
   rounding, we mean 0.123456 will be rounded to 0.12346.

10. A number n is perfect if the sum of its factors strictly smaller than n is
    same as that of n. For example, factors of 6 are 1, 2 and 3 which adds upto
    6. Write a C program that takes a long integer and checks if the number is
    perfect or not.

# Exercise (in case all the above 10 programs are done)

The goal of this exercise to compare how fast the following ways of 
implementing a program are:

1. Writing a shell script
2. Writing a python program
3. Writing a C program
4. Using an in-built functionality (like coreutils).

The test program is just the following: upon running it, it just prints the
character 'y' in a new line infinitely till you abort (using Ctrl+C).

$ ./prog
y
y
y
y
y
y
and so on

This program may not do anything interesting, but it is still worthwhile to see
which way of implementing it is faster relative to others.


## Comparing how fast can you keep printing 'y' !
Your task if the following. Solve the task of printing 'y' infinitely by
writingthe following three programs (1,2,3) and also exploring the existing
solution (4).

1. A bash script - yes.sh
2. A python program - yes.py
3. A C program compiled to get an executable - myyes
4. The shell built-in - yes (see `$ man yes` for details)

How do we compare their performance ? We will do this by computing how many
bytes got written to the terminal in a unit time. Luckly you can do this using
another program called `dd` (see `$ man dd`).

To see how fast your program is running, just run the program and pipe it to dd
and redirect the output to /dev/null (Just for fun, see what happens if you
did not redirect the output to /dev/null !). Run it for a few seconds and press
Ctrl+C and stop the execution. A sample output is shown below.

``` bash
$ ./myyes | dd > /dev/null 
^C157880+0 records in
157880+0 records out
80843760 bytes (80 MB, 77 MiB) copied, 0.870065 s, 92 MB/s
```

The figure in MB/s (or KB/s) is a good estimate of how fast your program
generate 'y'.

You should replace by the appropriate program name to execute them as shown
above. Compare all the four ways of generating 'y' and order them in the
ascending order of data generated per second.

Which one is fastest and why ? Which one is slowest and why ?

