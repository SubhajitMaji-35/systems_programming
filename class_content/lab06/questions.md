# Instructions

* There are three sections in this document - Questions, Error codes and Exercise

* In `lab06` folder, you will find 10 folders with the names 1 to 10.

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
  program named `6`) is as follows:

  ``` bash
  # To see if any extra characters are printed
  $ ./6 < tests/test1.in | hexdump  
  # To view the same in human readable form
  $ ./6 < tests/test1.in | hexdump -c
  ```

* To test your program, cd to the directory for the question and run `$ make
  tests`. It will show which all test cases passed and which all failed.

* Repeat the above till all the test cases have passed. Then, move on to the
  next question.

* Once you have finished with the questions, head to the section on Error
  codes, where you are expected to find bugs in the program.

* If you have finished all of it, there are some exercises at the end of this
  document to complete.

# Questions

1. Write a C program that takes as input any number between 0 and 65535 and
   prints its hexadecimal representation. NOTE: You are not allowed to used the
   %x specifier, and / or % operators. (Hint: Bitwise operations)

2. Write a C program that takes an input a 4-character long hexadecimal
   representation and prints its decimal representation. NOTE: You are not
   allowed to used the * operators, or pow() function.

3. Write a C program to print all the Fibonacci numbers upto a given number n.
   Fibonacci sequence is given by 0, 1, 1, 2, 3, 5, 8, 13, ..

4. Write a program that takes as input a positive integer and prints its octal
   equivalent. You are allowed to use any operation.

5. Write a C program to find the greatest common divisor of 2 long integers. You can
   use the Euclid's algorithm to compute gcd which is as follows:

	Assuming a > b >= 0,
		    
	gcd(a,b) = a if b = 0
		 = gcd(b, a mod b) if b != 0 

6. Write a C program to print the following triangle: The following gives the
   triangle for n = 9. The user is expected to enter an odd integer.

	56789
	4567
	345
	23
	1

7. Write a C program that takes as input two 3 x 4 matrices, adds them, and
   prints the resulting matrix. NOTE: Both matrices are provided in row-major
   format.

8. Write a C program that takes as input two 3 x 3 matrices, multiplies them,
   and prints the resulting matrix in column-major form. NOTE: Both input
   matrices are provided in row-major form.

9. Write a C program to read a string and check if it is palindrome using
   pointers.

10. Write a C program to read two strings and concatenate using pointers.

11. Write a C program that reads a positive integer and prints the following pattern.
    If the input is 2, the output is

	0 1
	2

If the input is 12, the following is printed

	0 1 3 6 10
	2 4 7 11
	5 8 12
	9

If the input is 15, the following is printed

	0 1 3 6 10 15
	2 4 7 11
	5 8 12
	9 13
	14

# Error codes 
For each of the c files in the folder `error`, there could be
compilation/logical/runtime errors.  Identify the errors are fix them.

* Please use `-Wall` flag while compiling. For example,

``` bash
gcc -Wall program.c -o program

`

# Exercise (in case all the above questions + error codes are done)
Read the following questions and answer them. Solve the following questions in the
`exercises` directory in the `lab05/src` folder.

``

## Exercise 1: String and library in C
Check the file `exercises/mystring/mystring.c` for details.  You are expected
to test your code by compiling and running `test-mystring.c` in the same
directory as mystring.c. To make this process easy, just do the following:

To compile mystring, just do 

$ make

The main function appears in test-string.c. You need to add the missing test cases there.

To test your programs, just do

$ make test

To know more about the string functions, do 

$ man 3 string

The number 3 corresponds to the section where C libraries are mentioned in the manual pages.
In this exercise, you will be implementing a subset of these functions.
