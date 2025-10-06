# Instructions

* There are three sections in this document - Questions, Error codes and Exercise

* In `lab08` folder, you will find 11 folders with the names 1 to 11.

* Each folder has a .c file with the same name as the folder, a `test` directory
  and a `makefile`. The .c file already contains the necessary instructions to
  fill it. In particular, modify only the parts mentioned in the file.

* Read the question number i below and start editing the i.c file in folder i.
  That is, question number 1 needs to answered in `1/1.c`, question number 2
  needs to be answered in `2/2.c` and so on.

* You can compile the .c file by running `$ make`. Any errors/warnings will be
  displayed here. You must change the .c file so that no errors or warning is
  displayed.

* You are also encouraged to inspect the output of program using `hexdump` to see 
  if any stray/unprintable characters are being printed.  An example usage (for
  program named `5`) is as follows:

  ``` bash
  # To see if any extra characters are printed
  $ ./5 < tests/test1.in | hexdump  
  # To view the same in human readable form
  $ ./5 < tests/test1.in | hexdump -c
  ```

* To test your program, cd to the directory for the question and run `$ make
  tests`. It will show which all test cases passed and which all failed.

* Repeat the above till all the test cases have passed. Then, move on to the
  next question.

* Once you have finished with the questions, head to the section on Error
  codes, where you are expected to find bugs in the program.

* If you have finished all of it, there are some exercises at the end of this
  document to complete.

|| NOTE: FOR DYNAMIC MEMORY ALLOCATION
|| IF YOU ARE USING malloc() TO ALLOCATE MEMORY, IT MUST BE FREED USING A CALL
|| TO free(). OTHERWISE IT CAN LEAD TO MEMORY LEAKS.


# Questions

1. Write a C program to read two complex numbers and perform addition,
   subtraction, multiplication and division operations on these numbers. NOTE:
   All operations should use functions that take two complex numbers as input and
   returns a complex number. You can assume that the second complex number is
   never 0. The result should be printed using a display function that takes a
   complex number as its argument. All numbers should be printed to 4 decimal
   places accuracy.

2. Write a C program that takes as input a positive unsigned integer and prints its
   factorial. NOTE: If the factorial is too large, print TOO LARGE TO COMPUTE.
   Hint: Use the constant LONG_MAX for finding the maximum value for long type.

3. Write a C program to find the inverse of a integer 2x2 matrix. NOTE: The matrix is
   given to you in row-major format. If the inverse does not exist print NOT
   INVERTIBLE. All entries of the matrix should be printed to 4 decimal places
   of accuracy.

4. Write a function that takes a structure ‘Rectangle’ as an argument and
   returns a `Point` that contains the coordinates of the center of the
   Rectangle. Here `Rectangle is a structure with height, width and another
   structure `Point` corresponding to the coordinates of the bottom left corner
   as its elements. The structure `Point` contains float values x, y as its
   elements. 
   
   You will be given the bottom left corner point (as x,y pairs), height and
   width of a rectangle and your goal is to use the above function to compute the
   centre of the rectangle. All numbers should be printed to an accuracy of 4
   decimal places.

5. Write a C program to store n elements in an array (where n is taken as
   input) and print the elements using a pointer.

6. Write a C program that takes an angle x in degrees, converts it to radians
   represented as y and compute (sin(y))^3 + (cos(y))^3 (upto 5 decimal
   places). You should use math libraries to do it.  You will also need to modify
   the makefile to link against math library using -lm (without which the program
   will not compile correctly).  Also, you are free check the manpages using `$
   man 3 sin` and `$ man 3 cos`. Use the constant M_PI (from math.h) to get the
   value of pi.

7. Write a C program to find the largest element in an array using pointers.
   The maximum size of the array is not known to you.  The input consists of
   the size of the array, followed by the elements in the array (of type
   integer). 

8. Write a function in C to find the sum of digits of a positive number until a
   single digit occurs. For example if the number is 523, them the output is 1
   (523 -> 10 -> 1). You are expected to use recursion to solve this question. 

9. Write a program in C to print a string in reverse using a pointer. The
   maximum possible size of the string is not known to you. The input consists
   of the length of the string, followed by the string

10. Write a C program to read two integers and swap them using a function with
    two pointers as its parameters.

11. Write a C function to create and return a duplicate of a student structure
    variable. The structure has fields name (string of max 50 chars),
    age (short), roll number (long), marks (int). NOTE: Duplicate structure should have id
    number with 100000 added to the original one, with all other fields being
    identical. Also write a function `print_details` that take in pointer to a
    student structure as argument and prints all its fields in the format:
    
	Name: Monu
	Age: 20
	Roll: 11223344
	Marks: 88


# Error codes (11 nos)
Each of the c files in the `error` directory starts with a brief description of
what the programming is supposed to output, but is not doing so due to some
issues. Use GDB (or otherwise) to debug the programs given in `error` directory
to identify the issues and fix them so that it behaves as expected. 

# Exercise (in case all the above 11 programs and 11 error codes are done)
For the exercises, test cases are provided only for Question 4. You are
expected to manually compile them using `gcc -Wall determinant.c -o
determinant` and test the files. Makefiles are not provided. Hence `make tests`
will not work.

1. Read the document on do while, switch case and solve the questions on the
   usage of break and continue. Details can be found in file `exercises/1.c`

2. Read the program in `exercises/2.c` and explain to yourself why it works
   correctly.

3. Write a program to swap two numbers using bitwise operations without using
   temporary variables. Details can be found in the file `exercises/3.c`. Hint:
   (1) previous question, (2) to swap two numbers, it suffices to swap their
   bits.

4. In this question, you need to compute the determinant of an n x n matrix
   using recursion. You will also need to use dynamic memory allocation.
   Details can be found in `exercises/determinant/` folder.
