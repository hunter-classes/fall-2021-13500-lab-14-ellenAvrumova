#pragma once
template <class T>
class MyVector {
    public:
        int size(); //returns size of vector
        int capacity(); //returns size of allocated storage capacity
        bool empty(); //tests whether vector is empty (true if the container size is 0, false otherwise)
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