FLAGS= -Wall -c

mystring.o:
	gcc $(FLAGS) mystring.c -o mystring.o

test.o: mystring.o test-string.c
	gcc $(FLAGS) test-string.c -o test.o
	gcc mystring.o test.o -o main

test: test.o
	./main

clean:
	rm -f mystring.o test.o main

