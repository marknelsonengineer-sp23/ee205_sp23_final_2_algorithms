###############################################################################
### University of Hawaii, College of Engineering
### EE 205 - Spr 2023 - Final Exam 2 - Algorithms
###
### @file    Makefile
### @author  Mark Nelson <marknels@hawaii.edu>
###############################################################################

TARGET = main

all:  $(TARGET)

CC        = g++
CFLAGS    = -Wall -Wextra $(DEBUG_FLAGS) -std=c++17 -march=native -mtune=native
MAKE      = make

debug: DEBUG_FLAGS = -g -DDEBUG -O0
debug: $(TARGET)

main: main.cpp
	$(CC) $(CFLAGS) -o main main.cpp

test: main
	./main

clean:
	rm -f $(TARGET) *.o
