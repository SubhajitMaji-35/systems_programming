# Default case (user-side)
PROJ_HOME ?= $(CURDIR)
TESTS_DIR ?= $(PROJ_HOME)/tests

# Project specific
NAME := 1
SOURCES_LIST := 1.c
MAKE_FILE := $(CURDIR)/$(lastword $(MAKEFILE_LIST))
OPTS := -Wall -Werror

# targets
all: build

#####################
# Do not edit above #
#####################

# TODO: Edit only in the following parts
# You must write three rules:
# 	- linkedlist.o : compile the linked list library
# 	- 1.o : compile 1.c
# 	- build : build the final executable

linkedlist.o : linkedlist.c linkedlist.h
	gcc -Wall -c linkedlist.c -o linkedlist.o

1.0 : 1.c
	gcc -Wall -c 1.c -o 1.o

build : linkedlist.o 1.o
	gcc 1.o linkedlist.o -o 1

#####################
# Do not edit below #
#####################

run: build
	@echo "Running the program\n"
	@$(PROJ_HOME)/$(NAME)

clean:
	rm -f $(NAME) run.log leaks.log *.o

tests: clean build
	@echo 'Running local test-suite'
	@$(TESTS_DIR)/verifier --proj-dir=$(PROJ_HOME) --proj-name=$(NAME) --tests-dir=$(TESTS_DIR)
	@cat run.log
	@echo 'Finished running all test cases'

ltests: clean build
	@echo 'Running valgrind for test-suite'
	@echo 'Hang in tight ... while we test'
	@$(TESTS_DIR)/leakcheck --proj-dir=$(PROJ_HOME) --proj-name=$(NAME) --tests-dir=$(TESTS_DIR)
	@cat leaks.log
	@echo 'Finished running valgrind on test cases'
