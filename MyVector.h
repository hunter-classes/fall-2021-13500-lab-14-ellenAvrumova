/**
 * Author: Ellen Avrumova
 * Course: CSCI-135
 * Instructor: Mike Zamansky
 * Assignment: Lab 14
 * This is the file that contatins all the prototypes for the functions in MyVector.cxx
*/

#pragma once

template <class T>
class MyVector {
    public:
        MyVector(); //vector constructor
        int size(); //returns number of elements in vector
        int capacity(); //returns size of allocated storage capacity
        bool empty(); //tests whether vector is empty (true if size is 0, false otherwise)
        void push_back(T item); //adds element at the end
        void pop_back(int n); //deletes element at index n
        void pop_back(); //deletes last element
        void clear(); //removes all elements in vector
        T &operator[] (int n); //for access and assignment
    private:
        T *data;
        int vector_size;
        int vector_capacity;
};

#include "MyVector.cxx"