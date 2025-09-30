# Instructions

* There are three sections in this document - Questions, Error codes and Exercise

* In `lab09` folder, you will find 5 folders with the names 1 to 5.

* Each folder has a .c file with the same name as the folder, a `tests` directory
  and a `makefile`. The .c file already contains the necessary instructions to
  fill it. In particular, modify only the parts mentioned in the file.

* You can compile the .c file by running `$ make`. Any errors/warnings will be
  displayed here. You must change the .c file so that no errors or warning is
  displayed.

* Test your code using `make tests`. Output will appear in `run.log`. 
  Check for memory leaks using `make ltests`. Leak report for each program
  will appear in `leaks.log`.

* You are also encouraged to inspect the output of program using `hexdump` to see 
  if any stray/unprintable characters are being printed.  An example usage (for
  program named `5`) is as follows:

  ``` bash
  # To see if any extra characters are printed
  $ ./5 < tests/test1.in | hexdump  
  # To view the same in human readable form
  $ ./5 < tests/test1.in | hexdump -c
  ```

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

1. Answer this question in src/1/1.c

   Write a C program that stores a list of numbers (the exact way the input is
   given is specified later) and perform basic operations on the information
   like (0) interactive traversal (allowing forward moves starting from head),
   (1) print the list (starting from head), (2) insert at the head, (3) search
   for data, (4) delete data, (5) reverse a list, 

   Details of what is expected to be done is provided as a C docstring above
   each function definition in the file `src/1.c`. The main function is already
   written for you and should not be modified for this question.

   Support all of these operations by building a singly linked list data
   structure. The functionality (0) is already written for you.

   The struct node is defined as:

	``` c
	struct node {
		int data;
		struct node* next;
	};

	```
   
   Please check sample inputs and outputs in the `tests` folder before
   proceeding.
	
   Test your code using `make tests`. Output will appear in `run.log`. 

   Check for memory leakes using `make ltests`. Leak report for each test case
   will appear in `leaks.log`.

   Suggestion: Start writing the functions in the order in which they appear
   starting from 1, 2 and so on.

2. Answer this question in src/1/
 
   For the above question (Question 1), do `make ltests` to know which all test
   cases are leaking memory. Your task is to interpret and understand the
   messages and fix the code to prevent memory leaks. Before the main function
   exits, add appropriate code so that any allocated memory remaining is freed.

   In the process of fixing the leaks, you should make sure that all the test
   cases also passes.  All your work should appear in this folder.

3. Answer this question in src/2/2.c

   Solve question 1 with a doubly linked list instead of singly linked list.
   The struct node is defined as follows with a prev pointer also. The
   interactive traversal (6) should be modified suitably to allow forward and
   backward moves starting from head.

	``` c
	struct node {
		int data;
		struct node* next;
		struct node* prev;
	};

	```
   Test your code using `make tests`. Output will appear in `run.log`. 

   
4. Answer this question in src/2/

   Repeat Question 2 for the doubly linked list (implemented in Question 3).

5. Answer this question in src/3/3.c

   Write a program that creates a binary tree whose structure is as follows:

           2
         /   \
        7     9
       /     / \
      15    11  13
     /  \
    18  20

   Use the following C structure to create the tree

   ``` c
   struct tree_node {
	int data;
	struct tree_node* left_child;
	struct tree_node* right_child;
	struct tree_node* parent;
   };

   ```
   
   Your task is to build a binary tree with the exact structure as shown
   above with 2 as its root. For the nodes with a missing left/right child or
   parent, the corresponding pointer is to be set to NULL.

   Write a C function that takes in the root of the tree and allows for
   interactive traversal of the tree similar to the one in Question 1 and 2. Your
   traversal should allow for going to the left/right child as well as going to
   the parent based on the user choices.

   You are expected to use this functionality to check if the tree is created
   properly.

6. Answer this question in src/4/4.c

   Write a C program that takes in a file name as a commandline argument and
   displays the contents of the file to terminal. If the file is not present or
   does not permissions to access, it should print "Failed" and exit.

   Test the program yourselves.

7. Answer this question in src/5/5.c

   Write a C program that takes in an input n and creates a 3 dimensional tensor
   of size n x n x n and computes the product of all the entries and output the
   value module 101010.

   The input to the tensor is specified as the first vertical layer, followed
   by the second and so on.

   Hint 1: The product is going to exceed even the limit of long int! Use the
   following property of modular arithmetic to compute the final value : for
   two number a, b, 

       ab mod N is equal to ((a mod N) * (b mod N)) mod N

   Hint 2: For two dim arrays, you use int ** type pointers. For three dim
   arrays, you can use int *** type pointers.

   Write at least 5 more test cases in the folder `tests/` and test your code
   by running `make tests`

8. Answer this question in src/5/

   For the above question (Question 7), do `make ltests` to know which all test
   cases are leaking memory, interpret and understand the messages and fix the
   code to prevent memory leaks. 

   In the process, you should make sure that all the test cases also passes.


# Error codes (11 nos)
Each of the c files in the `error` directory starts with a brief description of
what the programming is supposed to output, but is not doing so due to some
issues. Use GDB (or otherwise) to debug the programs given in `error` directory
to identify the issues and fix them so that it behaves as expected. 

# Exercise (in case all the above 6 programs and 11 error codes are done)
For the exercises, test cases are provided only for Question 4. You are
expected to manually compile them using `gcc -Wall determinant.c -o
determinant` and test the files. Makefiles are not provided. Hence `make tests`
will not work.

1. Determinant computation from previous lab (lab 08) exercise (if not already done).

