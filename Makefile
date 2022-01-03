# Author: Ellen Avrumova
# Course: CSCI-235
# Instructor: Mike Zamansky
# Assignment: Lab 14
# This is Makefile for lab 14.

main: main.o
	g++ -o main main.o

tests: tests.o
	g++ -o tests tests.o

main.o: main.cpp MyVector.h MyVector.cxx
	g++ -c main.cpp -std=c++11

tests.o: tests.cpp doctest.h MyVector.h MyVector.cxx
	g++ -c tests.cpp -std=c++11

clean:
	rm -f *.o