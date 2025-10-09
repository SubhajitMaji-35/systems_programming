# Instructions

* In `lab10` folder, you will find 5 folders with the names 1 to 5.

* For debugging using GDB include -g flag during compilation in makefile.

|| NOTE: FOR DYNAMIC MEMORY ALLOCATION
|| IF YOU ARE USING malloc() TO ALLOCATE MEMORY, IT MUST BE FREED USING A CALL
|| TO free(). OTHERWISE IT LEADS TO MEMORY LEAKS.
||
|| IF YOU ARE USING REALLOC, THE DEALLOCATION WILL BE HANDLED BY REALLOC
|| HOWEVER, THE MEMORY ALLOCATED USING REALLOC SHOULD ALSO BE FREED USING A
|| CALL TO free() BEFORE THE PROGRAM EXITS. OTHERWISE IT LEADS TO MEMORY LEAKS.

# Questions

1. Answer this question in src/1/.  In this question, we will see how to
   create a library for linked list.  Answer the questions in the order (a), (b),
   and (c) given below.

   (a) LIBRARY CREATION: The file named `linkedlist.h` should contain the
   struct declarations appropriately added.  All the functions which were
   declared in this header file must appear in the file `linkedlist.c`.
   You can directly use the linked list created in the previous lab (Lab 09).

   (b) MAKEFILE: Modify the makefile to add rules to ...

	- Compile linkedlist.c to produce linkedlist.o. This rule must be
	  triggered whenever linkedlist.c or linkedlist.h has been modified.
	  The rule name should be `linkedlist.o`. Compiler flags -Wall must be
	  set during the compilation.

	- Compile 1.c to produce 1.o. This rule must be triggered whenever
	  there is any change made to 1.c. The name of the rule should be
	  `1.o`. Compiler flags -Wall must be set during the compilation.

	- Build the final executable named 1 from 1.o and linkedlist.o. The
	  rule name should be `build`.

   (c) FULL TESTING:  Modify 1.c to include the main() function that tests the
   linkedlist implementation. Compile your program using `make` and fix any
   issues reported.
	
   Test your program by running `make tests` and `make ltests` to see if
   everything is working as expected.

2. Answer this question in src/2/. Answer the questions in the order (a), (b), (c) 
   and (d) as given below.

   (a) LIBRARY CREATION: Write a C library that implements a stack data
   structure for storing a list of signed integers and perform basic operations
   on the information like (1) pushing, (2) getting the value at the head, (3)
   pop from the stack top.

   Support all of the above operations by building a stack data structure. 
   You can assume that the stack size is fixed to be 1000. 

   Details of what is expected to be done is provided as a C docstring above
   each function declaration in the file `src/2/stack.h`. Give the function
   definitions matching the specification in `src/2/stack.c`.

   (b) MAKEFILE: Modify the makefile to add rules to ...

	- Compile stack.c to produce stack.o. This rule must be
	  triggered whenever stack.c or stack.h has been modified.
	  The rule name should be `stack.o`. Compiler flags -Wall must be
	  set during the compilation. Verify that running `make stack.o` 
	  triggers this rule.

	- Compile 2.c to produce 2.o. This rule must be triggered whenever
	  there is any change made to 2.c. Compiler flags -Wall must be
	  set during the compilation. Running `make 2.o` should trigger this.

	- Compile test-stack.c to produce test-stack.o. This rule must be
	  triggered whenever test-stack.c is modified. Compiler flags -Wall
          must be set during the compilation. Running `make test-stack.o`
	  should trigger this.

	- Build the testing executable name test from test-stack.o and
	  stack.o. Build the final executable named 2 from 2.o and stack.o.
	  Running `make` should trigger both of them. You should add
	  dependencies appropriately.

   (c) UNIT TEST: Your next task is to test the library you have created by
   writing unit tests. The purpose of the unit tests is to test the
   functionality of individual functions properly. Even though the functions
   by themselves are simple, writing unit test provides an isolated way of
   testing the functions.

   The unit tests are to be written in `src/2/test-stack.c`. Complete the code
   for testing all the functions. It already has the code to run the test cases
   and a code for testing push(). Read this and add as many test cases as
   possible (for this as well as the other functions) so that all boundary
   conditions of the code written gets tested.

   Build using `make` and run the executable using `./test-stack` for unit
   testing. Fix any failing test cases.

   (d) FULL TESTING: The main function is already written in 2.c for you. Add
   appropriate header as required. 
   
   Test your code using `make tests`. Output will appear in `run.log`.  Check
   for memory leaks or illegal memory accesses using `make ltests`. Leak report
   for each test case will appear in `leaks.log`.

3. Answer this question in src/3/. Answer the questions in the order (a), (b)
   and (c) as given below.

   (a) LIBRARY CREATION: Write a C program that implements the list from python
   language. Currently, your aim is to store a list of numbers and perform
   basic operations on the information like (1) update the list with data at a
   given location, (2) delete an element at a location and reduce the list size by
   1, (3) insert an element at a location and increase the list size by 1 and (4)
   append data to the end of the list.

   The list struct corresponding to python list is declared as follows.
   ``` c
	 struct list {
	   int* array;
	   int curr_count;
	   int max_count;
         };
   ```

   Note that the size of the list (max_count) is not known at compile time or
   at runtime.  Hence, you need to allocate the memory for the list as and when
   data comes using realloc(). To do this, you are also expected to write two
   helper functions grow() and shrink() which work as follows:

   The strategy for grow is: everytime the list is full, do realloc() and
   allocate double the memory.

   The strategy for shrink is: everytime a list is half full, do realloc() and
   halve the memory used.

   Support all of the above operations by building the python list data structure. 

   Details of what is expected to be done is provided as a C docstring above
   each function declaration in the file `src/3/list.h`. Give the function
   definitions matching this specification in `src/3/list.c`.

   (b) MAKEFILE: Modify the makefile to add rules to ...

	- Compile list.c to produce list.o. This rule must be
	  triggered whenever list.c or list.h has been modified.
	  The rule name should be `list.o`. Compiler flags -Wall must be
	  set during the compilation. Running `make list.o` should trigger
	  this.

	- Compile test-list.c to produce test-list.o. This rule must be
	  triggered whenever test-list.c is modified. Compiler flags -Wall
          must be set during the compilation. Running `make test-list.o` should
	  trigger this.

	- Build the testing executable name `test` from test-list.o and
	  list.o.  Running `make` should trigger this.

	- Write a rule called `tests` to run ./test. Running `make tests`
	  should trigger this.

	- Write a rule called `leaks` to run valgrind on ./test. Running
	  `make leaks` should trigger this.

   	- Write also a rule `clean` to clean up the object files and final
	  exectuables created. Running `make clean` should trigger this.

   (c) UNIT TEST: Your next task is to test the library you have created by
   writing unit tests. The purpose of the unit tests is to test the
   functionality of individual functions properly. Even though the functions
   by themselves are simple, writing unit test provides an isolated way of
   testing the functions.

   The unit tests are to be written in `src/3/test-list.c`. Complete the code
   for testing all the functions. It already has the code to run the test
   cases. Add as many test cases as possible so that all boundary conditions of
   the code written gets tested.

   Build using `make` and run the executable test using `make tests`. Fix any
   failing test cases. Run `make leaks` and fix all the memory leaks arising.

4. Answer this question in src/4/. Answer the questions in the order (a), (b), (c) 
   and (d) as given below.

   (a) LIBRARY CREATION: Write a C library that creates a new type called
   Biginteger which can stores numbers with arbitrary number of allows addition of
   two numbers with arbitrary number of digits similar to python. To keep the
   implementation simple, assume that we allow the numbers to be only positive.

   In addition to addition, you also need to write functions for print
   Biginteger and also write a couple of helper functions. 

   Details of implementation can be found in `bigint.h` with details of what is
   expected from in the docstring of the function declarations. The function
   definitions are to be written in `bigint.c`. You are expected to use the List
   from the previous question to store the number. Copy list.c and list.h over
   to here.

   The big integer structure is defined as follows.

   ``` c
	struct bigint {
		List *numbers;
		int sign;
	};
    ```

   The file 4.c is the main program for testing the bigint library. This should
   not be edited.

   (b) MAKEFILE: Modify the makefile to add rules to ...

	- Compile list.c to produce list.o. This rule must be
	  triggered whenever list.c or list.h has been modified.
	  The rule name should be `list.o`. Compiler flags -Wall must be
	  set during the compilation. Running `make list.o` should trigger
	  this.

	- Compile 4.c to produce 4.o. This rule must be triggered whenever
	  there is any change made to 4.c. Compiler flags -Wall must be
	  set during the compilation. Running `make 4.o` should trigger this.

	- Compile bigint.c to produce bigint.o. This rule must be
	  triggered whenever bigint.c is modified. Compiler flags -Wall
          must be set during the compilation. This should depend on list.o
	  also.Running `make bigint.o` should trigger this.

	- Build the testing executable name 4 from bigint.o and
	  list.o and 4.o. Running `make` should trigger this.

   (c) UNIT TEST: Your next task is to test the library you have created by
   writing unit tests. The purpose of the unit tests is to test the
   functionality of individual functions properly. Even though the functions
   by themselves are simple, writing unit test provides an isolated way of
   testing the functions.

   The unit tests are to be written in `src/4/test-bigint.c`. Complete the code
   for testing all the functions. Add as many test cases as possible so that all
   boundary conditions of the code written in the bigint library gets tested.

   Add appropriate rules in makefile to compile test-bigint.c properly.  Build
   using `make test-bigint` and run the executable using `./test-bigint`. Fix any
   failing test cases. Also run `valgrind ./test-bigint` and fix the memory,
   if any.

   (d) FULL TESTING: The main function is already written in 4.c for you. Add
   appropriate header files are required. 
   
   Test your code using `make tests`. Output will appear in `run.log`.  Check
   for memory leaks or illegal memory accesses using `make ltests`. Leak report
   for each test case will appear in `leaks.log`. 

5. Answer this question in src/5/

   Read the file questions.md given in this folder.

