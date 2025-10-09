OPTS=-Wall

realloc: realloc.c 
	gcc $(OPTS) realloc.c -o realloc

.PHONY: clean
clean:
	rm -f realloc

leaks: realloc
	valgrind ./realloc > /dev/null


all: clean realloc
