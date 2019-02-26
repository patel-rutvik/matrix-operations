# Created by: Rutvik Patel
# Email: rutvik@ualberta.ca
# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #

CC = g++ # compiler of choice
FLAGS = -std=c++11 -O3 # optimization flags

# - - - - - - - - - - - - DO NOT EDIT BELOW THIS LINE - - - - - - - - - - - - #

# builds and runs the project
build: main.o
	@$(CC) main.o -o main
	@./main

# coverts main.cpp into its respective object file
main.o: main.cpp multiply.cpp transpose.cpp util.cpp util.h
	@$(CC) main.cpp -o main.o -c $(FLAGS)

# prints out information about the Makefile targets
help:
	@echo 'make (build)    : builds and runs the project'
	@echo 'make main.o     : compiles main.cpp into main.o (object file)'
	@echo 'make clean      : deletes .o and executable files in the directory'
	@echo 'make help       : information about the targets of Makefile'

# cleaning out the .o and executable files from directory
clean: 
	@rm -f main main.o

