#include <iostream>
#include "MyVector.h"

template <class T>
MyVector<T>::MyVector() {
    data = new int[10];
    vector_size = 0;
    vector_capacity = 10;
}

template <class T>
int MyVector<T>::size() {
    return vector_size;
}

template <class T>
int MyVector<T>::capacity() {
    return vector_capacity;
}

template <class T>
bool MyVector<T>::empty() {
    std::cout.setf(std::ios::boolalpha);
    return vector_size == 0;
}

template <class T>
void MyVector<T>::push_back(T item) {
    data[vector_size] = item;
    vector_size++;
}

template <class T>
T &MyVector<T>::operator[](int n) {
    return data[n];
}
