# Default case (user-side)
PROJ_HOME ?= $(CURDIR)
TESTS_DIR ?= $(PROJ_HOME)/tests

# Project specific
NAME := 4
SOURCES_LIST := 4.c
MAKE_FILE := $(CURDIR)/$(lastword $(MAKEFILE_LIST))
OPTS := -Wall -Werror

# targets
all: build

#####################
# Do not edit above #
#####################

# TODO: Edit only in the following parts
# You need to write rules as mentioned in the question

#####################
# Do not edit below #
#####################

run: build
	@echo "Running the program\n"
	@$(PROJ_HOME)/$(NAME)

clean:
	rm -f $(NAME) run.log leaks.log *.o test-bigint

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
