all: main test

program.o: program.c
	gcc -Wall -c program.c -o program.o


myadd.o: myadd.c
	gcc -Wall -c myadd.c -o myadd.o

mymod.o: mymod.c
	gcc -Wall -c mymod.c -o mymod.o


main: mymod.o myadd.o program.o
	gcc myadd.o mymod.o program.o -o main


test-add.o: test-add.c myadd.o mymod.o 
	gcc -Wall -c test-add.c -o test-add.o

test: test-add.o
	gcc test-add.o myadd.o mymod.o -o test


.PHONY: clean all
clean:
	rm -f *.o test main


