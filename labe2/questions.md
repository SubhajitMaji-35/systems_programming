# Test 2 Instructions

* Search in the C files for "TODO". You are expected to appropriately fill them
  as mentioned in the questions below.

* For each of the question, test using `make tests` for test cases supplied 
  and `make ltests` to test for memory leaks. For each of the questions, you
  can see the results of tests in `run.log` and results of leak tests in
  `leaks.log`.

* Parts of the C code / makefile which appear below of "DO NOT MODIFY BELOW",
  or which appear above of "DO NOT MODIFY ABOVE" should not be edited in any way.

* Each test case passed will fetch 1 point and each leak case passed will fetch
  0.5 points. If your code does not compile, you do not get any points.

* Three test cases are provided for each of the questions. These are given only
  for you to test your programs and will not be used for evaluation.

  Instead, the evaluations will be based on 10 test cases (all hidden) which
  will be released after the exam. You are encouraged to write more
  test cases to test if your program is behaving as expected.

# Test 2 Questions

1. Write a C program that takes in a sentence terminated by a newline and
   prints the words of the sentence in the reverse order. The length of the
   sentence or the number of characters in a word appearing in the sentence is
   not known in advance.

   For example, if the test file contains

	   have a nice day

   Then the output should be

	   day nice a have

   Answer this question in `src/1/1.c`.

   Hint: You can check `man 3 getchar`. If you are not finding it useful, feel
   free to ignore this hint :)

2. Write a program which encrypts and decrypts using Caesar cipher. The
   encryption and decryption process of Caesar cipher is as follows.

   The encryption takes in two arguments: a `string` (with no spaces) and a `key`,
   which is a non-negative integer less than 26. The encryption occurs by
   replacing each character in the string by another character `key` many
   positions **down** the alphabet set cyclically. 

   This applies only to upper and lower case English alphabets. Other symbols,
   if present, should not be modified.  Every example, if the `string` is "bad"
   and `key` is 3, then the encrypted string should be "edg".

   The decryption takes in two arguments: a `string` (with no spaces) and a `key`,
   which is a non-negative integer less than 26. The decryption occurs by
   replacing each character in the string by another character `key` many
   positions **up** the alphabet set.  

   This applies only to upper and lower case English alphabets. Other symbols,
   if present, should not be modified.  Every example, if the `string` is "vdg"
   and `key` is 3, then the decrypted string should be "sad".

   You should complete the functions definitions of `void encryption()` and
   `void decryption()`. These functions takes in a string and a key as argument and
   modifies the string passed as argument.

   Each test file consists of  length of the string, the string itself and the key
   value and a character which can be `e` or `d` in a single line. For example:

       Input 1: 7 GoldCoins 3 e
  
   Expected output is

       Output 1: JrogFrlqv

   Some more sample inputs and outputs  are given below: 

       Input 2: 13 mutiny_Brutus 1 e
       Output 2: nvujoz_Csvuvt

       Input 3: 3 vdg 3 d
       Output 3: sad

   Answer this question in `src/2/2.c` alone. Code written in any other file
   will not be evaluated.

   Hint: You can do `man ascii` to know the ASCII values.

3. Write a C program that takes in a list of `n` numbers given as unsigned 
   integers as input in the form as a single line

   n a1 b1 a2 b2 ... an bn

   For each of the numbers ai and bi, you are expected to compute the last 6
   digits of `ai` powered to `bi` (ai^bi) and print the results. That is, you
   need to compute 

   	ai^bi mod 1000000

   To keep it simple, we define 0^0 to be 1. You **must** implement the following
   (strange) method to compute the power:

   modpow(a,b)
   1. From a, compute 32 numbers: a^(1) mod 1000000, a^(2) mod 1000000,
      a^(4) mod 1000000, a^(8) mod 1000000, ..., a^(2^i) mod 1000000,... and so
      on till a^(2^31) mod 1000000. You can do this, by taking squares each
      time. 

      For example, you can compute a^(16) mod 1000000 by squaring a^(8) mod
      1000000 and then going modulo 1000000. 

   2. Compute the binary representation of b.

   3. Multiply the powers of a appropriately (again modulo 1000000) so that you
      compute a^b mod 1000000.

   **NOTE**: Any integer overflows occurring during steps 1 and 3 while
   multiplication should be handled appropriately (see hint at the end of this
   question).

   For example: to compute 4^42 mod 1000000, 

   (1) Compute the following 32 numbers.
         4^(2^0) mod 1000000, 4^(2^1) mod 1000000, 4^(2^2) mod 1000000,..., 4^(2^31) mod 1000000 
       and store the result.  

   (2) The binary representation of 42 is

             5 4 3 2 1 0  (bit index)
        42 = 1 0 1 0 1 0

   (3) To get the final result we do

      4^(32) x 4^(8) x 4^(2) mod 1000000    # choose 2^5, 2^3 and 2^1 as exponents as bit index
                                            # fifth, third, first from left is 1 in 101010
    = 298816

   Your task is to just write the C code for modpow() function. Answer this
   question in `src/3/3.c` using the algorithm described above. No points will
   be given if any other procedure is used.

   Hint: To handle overflows while doing a x b, store a and b as long type and
   then perform the multiplication.

4. Answer this question in src/4/.  In this question, you will create a library
   for performing vector operations over non-negative integers by creating a
   library for integer vectors.  Answer the questions in the order (a), (b),
   and (c) given below.

   (a) LIBRARY CREATION: The file named `ivector.h` contains the
   struct declarations appropriately added.  

   ``` c
   struct ivector {
   	unisgned int size;
   	unsigned int* vec;
   };
   typedef struct ivector Ivector;

   ```

   All the functions which were declared in this header file must appear in the
   file `ivector.c`. Details of what is expected from the function is given as
   a docstring in the `ivector.h` header file.

   (b) MAKEFILE: Modify the makefile to add rules to ...

	- Compile ivector.c to produce ivector.o. This rule must be
	  triggered whenever ivector.c or ivector.h has been modified.
	  The rule name should be `ivector.o`. Compiler flags -Wall and -Werror
	  must be set during the compilation.

	- Compile 4.c to produce 4.o. This rule must be triggered whenever
	  there is any change made to 4.c. The name of the rule should be
	  `4.o`. Compiler flags -Wall and -Werror must be set during the
	  compilation.

	- Build the final executable named 4 from 4.o and ivector.o. The
	  rule name should be `build`.

   (c) FULL TESTING:  Make appropriate changes in ivector.c and in the 4.c to
   allow using your ivector implementation. The file 4.c already contains some
   code. Read through the code. Currently it leaks memory. You should update
   the code to prevent any memory leaks. You are allowed to only add code to
   this file and not remove any.

   Compile your program using `make` and fix any issues reported.
	
   Test your program by running `make tests` and `make ltests` to see if
   everything is working as expected.
