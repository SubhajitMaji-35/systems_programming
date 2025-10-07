# Test 1 Questions 

1. Write a C program that reads a four digit positive number, say `z`, (with
   at least two different digits) and does the following:

    1. Arrange the digits of `z` in the increasing order to get a number `x`.
    2. Arrange the digits of `z` in the decreasing order to get a number `y`.
    3. Compute their difference `y-x`. If this is same as `z`, stop, else
       repeat the steps 1 and 2 above with `z = y-x`.

    If the input number is not valid (that is, does not have two different
    digits), you should output "Invalid" and exit. If the input is valid, it should
    output the value of `z` that is computed at the end of the above process.
    Answer this question in `src/1.c`

2. Write a C program that takes in a 4x4 matrix as input and prints its
   transpose. NOTE: The matrix is given to you in row-major format.  Answer
   this question in `src/2.c`

3. Write a C program that takes as input a positive long integer and does the
   following: if the number is even, halve the number and if the number is odd,
   multiply by 3 and add 1 to it. Repeat this till the number becomes 1. The
   program should print the sequence of numbers till it becomes 1 as given in
   the example below.

   For example, if the number is 3, then the sequence of numbers generated is
   3->10->5->16->8->4->2->1. Your program should output this as 

   3 10 5 16 8 4 2 1

4. Write a C program to read a string (all in lower case) of max length 100 and
   count the number of vowels in it using pointers. Answer this question in
   `src/4.c`. C code without using pointers will get only 50% of the credit.

5. Write a shell script that reads data from stdin and prints all the contents 
   from each line except the characters appearing in the 1, 4, and 9th
   locations. Answer this question in `src/5.sh`.

6. Write a shell script that uses the `date` program to write down the dates of
   the next 100 days starting from a date given as input via stdin (in YYYYMMDD
   format)  and print them in the format `YYYY-MM-DD, Day` where Day is one of
   Sun, Mon, Tue, Wed, Thur, Fri, Sat. 

   For instance, if the date was 12 Aug 3005, the first three lines of the output
   should look like.

   3005-08-12, Mon
   3005-08-13, Tue
   3005-08-14, Wed

   This should be followed by the remaining 97 entries. Answer this question in
   the file `src/6.sh`.

