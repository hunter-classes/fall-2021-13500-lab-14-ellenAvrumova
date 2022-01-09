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


