# Instructions

* In `lab11` folder, you will find 2 folders with the names 1 to 2.

|| NOTE: FOR DYNAMIC MEMORY ALLOCATION
|| IF YOU ARE USING malloc() TO ALLOCATE MEMORY, IT MUST BE FREED USING A CALL
|| TO free(). OTHERWISE IT CAN LEAD TO MEMORY LEAKS.


# Questions

0. The files for this question can be found in `exercise/` folder.

   The city of Pankilakkad has received many bombs from terrorists. The bomb is
   controlled by an exectuable `bomb1` and `bomb2` created using gcc from some
   C program. However the source C file of these programs are with the
   terrorists and hence are not available.

   To disarm the bombs, you should enter a passcode. Use your understanding of
   assembly to find the passcode.

   Once the passcode(s) is(are) found, write them in a text file `bomb1.txt`
   (for bomb1) and `bomb2.txt` (for bomb2), and place them in `exercise/`
   folder.

   Your code will be tested by running the following in the exercise directory.
   The expected output is also given.

   ``` bash
   $ ./bomb1 < bomb1.txt
   🥰 🥰 🥰 Bomb defused 🥰 🥰 🥰
   $ ./bomb2 < bomb2.txt
   🥰 🥰 🥰 Bomb defused 🥰 🥰 🥰
   ```
   Hint: (1) Use GDB, (2) To get decimal of a hexadecimal, you can do as follows (in shell)

   ``` bash
   $ printf "%d" 0x123

   ```

1. Answer this question in src/1/. Answer the questions in the order (a), (b)
   (c) and (d) given below.

   (a) LIBRARY CREATION: Write a C program that implements a queue data
   structure for storing a list of numbers (the exact way the input is given is
   specified later) and perform basic operations on the information like (1)
   enqueue, (2) getting the value at the head, (3) dequeue from the queue.
   Recall that queue follows first in, first out order.

   Support all of the above operations by building a queue data structure. 
   You can assume that the queue is fixed to be 1000 and can be implemented as
   as integer array of hat size. 

   In this question, you expected to be (1) define appropriate function
   declarations and provide the C docstring with the details of the
   implementation. Give the function definitions in the file `src/1/queue.h`.
   Give the function definitions matching the specification in `src/1/queue.c`.

   (b) MAKEFILE: Write a makefile to add rules to ...

	- Compile queue.c to produce queue.o. This rule must be
	  triggered whenever queue.c or queue.h has been modified.
	  The rule name should be `queue.o`. Compiler flags -Wall must be
	  set during the compilation.

	- Compile 1.c to produce 1.o. This rule must be triggered whenever
	  there is any change made to 1.c. Compiler flags -Wall must be
	  set during the compilation.

	- Compile test-queue.c to produce test-queue.o. This rule must be
	  triggered whenever test-queue.c is modified. Compiler flags -Wall
          must be set during the compilation.

	- Build the testing executable name test-queue from test-queue.o and
	  queue.o

	- Build the final executable named 1 from 1.o and queue.o. 

   (c) UNIT TEST: Your next task is to test the library you have created by
   writing unit tests. The purpose of the unit tests is to test the
   functionality of induvidual functions properly. Even though the functions
   by themselves are simple, it provides an isolated way of testing the
   functions.

   The unit tests are to be written in `src/1/test-queue.c`. Complete the code
   for testing all the functions. It already has the code to run the test cases
   and code for testing push. 

   Build using `make` and run the exectuable using `./test-queue`. Fix any
   failing test cases.

   (d) FULL TESTING: The main function is already written in 1.c for you and
   should not be modified for this question.

   You can use the test directory and makefile from the stack exercise to do
   this. You are expected to appropriately modify the test cases for queue.
   
   Test your code using `make tests`. Output will appear in `run.log`.  Check
   for memory leaks or illegal memory accesses using `make ltests`. Leak report
   for each test case will appear in `leaks.log`.

2. Answer this question in src/2/.

   The goal of this exercise is to use pointers along with file handling and
   build a small text editor with view and edit modes. We will call this editor
   as `vied`.

   (a) Specification: There are two modes of operation: text and command mode. When the
   program starts it is in command mode and takes in the following 8 commands.

   - Read command:
   	r filename
     
     Upon issuing this, the entire file is read to the memory. The first line
     is set as the current line. If there is any issue during file read, (file
     not found/no permissions) appropriate error message should be printed.

   - Write command:
   	w filename
    
     Upon issuing this, the data in memory is written to the file named
     filename. Existing content, if any, will be overwritten.

   - Show command:
        s

     Upon issuing this, the current line is printed. 

   - Next line command:

     Just pressing enter causes our program `vied` to print the line following
     the current line. Then, the displayed line becomes the current line. If
     there is no next line, then pressing enter has no effect.

   - Previous line:
        p
     
     Upon issuing this, the previous line is printed. Then, the displayed line
     becomes the current line. If there is no previous line, then this command
     has no effect.

   - Insert command:
        i

     This command causes `vied` to enter text mode. The entire line ending with a
     new line typed on the terminal is inserted in the memory before the
     current line.

   - Delete line:
        d

     Upon issuing this, the current line is deleted. The line following the
     current line becomes the new current line. Otherwise, if there is a line
     preceeding the current line, then that becomes the new current line.

   - Quit command:
        q
     
     Quit causes `vied` to terminate the execution. If the current file has
     been edited, it should display a message to the user that the
     contents will be lost if closed and prompt once again to close. It
     also closes any open file and deallocates any allocated memory before
     exiting.

   * To make sure that your program prints a line from the file irrespective of
     its length you will need to use the heap memory for dynamic allocation.
  
     To main the file in memory, make use of a doubly linked list with 

   ``` c
   struct fline {
   	char* line_data;
	struct fline* next;
	struct fline* prev;
   };
   ```
   You can reuse your code from the doubly linked list implementation from
   previous lab sessions to do this.

   * Create a file named `filemgmt.c` (with appropriate header file) for
     reading, writing and reading a line.  Suggested function declaration is as
     follows: Note that these operations involve appropriate read/write from
     the fline doubly linked list as described below.

     ``` c
     int read_file(char* fname);
     int write_file(char* fname);
     char* get_line(FILE* f);

     ```

     `read_file()` function takes in a filename, opens it in read mode,
     repeatedly calls `get_line` and appends the data obtained to the doubly
     linked list using the append function from the linked list library. The
     file is closed once end of the file is encountered. This function returns
     the number of bytes read. If the file does not exists or there is issue in
     accessing the file, -1 is returned.

     `write_file()` function takes in a filename, opens it in write mode and
     writes each line of the data in memory (stored as doubly linked list) to
     the file. Once the file is written, the file is closed and the number of
     bytes written is returned. If the  there is any issue in accessing the
     file, then -1 is returned.

   * Create a file named `command.c` (and appropriate header file) to read and
     process the commands from the user. This includes the following functions:

     ```c
     char* r_command();
     int p_command(char* c);
     ```
     
     The function `r_command()` reads a commandline from the user and returns a
     pointer to a string containing the line. The `p_command()` function takes
     in the first character of c, determines the type of the command and then
     performs the appropriate action to be performed.

     Both of these functions should call appropriate functions defined before
     to achieve this.

   * Create a file named `main.c` that does necessary initialization and keeps
     calling r_command() and p_command() appropriately. Your main() function
     should do this and should be kept as simple as possible.

   (b) You are expected to write an appropriate makefile to build and test the
   program. The final name of the executable is `vied`.

   (c) You are expected to write unit tests for each of the functions written
   in all the header files and test them. Also make sure that there are no
   memory leaks by running valgrind on the unit test.

   (d) Finally test your program by opening and editing files.

   Upon completeing this, you would have written a program of 400-500 lines
   from *scratch*.
