#include <iostream>
#include "MyVector.h"

template <class T>
MyVector<T>::MyVector() {
    data = new T[10];
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
    if(vector_size < vector_capacity) {
        data[vector_size] = item;
        vector_size++;
    }
    else {
        vector_capacity++;
        T *temp = new T[vector_capacity];
        for(int i = 0; i < vector_size; i++) {
            temp[i] = data[i];
        }
        temp[vector_size] = item;
        vector_size++;
        data = temp;
        delete[] temp;
    }
}

template <class T>
void MyVector<T>::pop_back(int n) {
    if(n >= 0 && n < vector_size) {
        T *temp = new T[vector_capacity];
        int index = 0;
        for(int i = 0; i < vector_size; i++) {
            if(i != n) {
                temp[index] = data[i];
                index++;
            }
        }
        data = temp;
        delete[] temp;
        vector_size--;
    }
}

template <class T>
void MyVector<T>::pop_back() {
    vector_size--;
}

template <class T>
void MyVector<T>::clear() {
    vector_size = 0;
}

template <class T>
T &MyVector<T>::operator[](int n) {
    return data[n];
}
