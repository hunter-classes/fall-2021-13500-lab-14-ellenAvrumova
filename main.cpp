#include <iostream>
#include "MyVector.h"

int main() {
    MyVector<int> v;
    std::cout << "Default vector size: " << v.size() << std::endl; //0
    std::cout << "Default vector capacity: " << v.capacity() << std::endl; //10
    std::cout << "Default vector is empty: " << v.empty() << std::endl; //true

    v.push_back(1);
    std::cout << std::endl;
    std::cout << "Now added the number ";
    for(int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " "; //1
    }
    std::cout << "to the vector." << std::endl;

    std::cout << "New vector size: " << v.size() << std::endl; //1
    std::cout << "New vector capacity: " << v.capacity() << std::endl; //10
    std::cout << "Vector is empty: " << v.empty() << std::endl; //false
    std::cout << std::endl;

    MyVector<double> list;
    list.push_back(1.5);
    list.push_back(2);
    list.push_back(3.1);
    list.push_back(4);

    std::cout << "Created vector with these elements: ";
    for(int i = 0; i < list.size(); i++) {
        if(i == list.size()-1) {
            std::cout << list[i];
        }
        else{
            std::cout << list[i] << ", "; //1.5, 2, 3.1, 4
        }
    }
    std::cout << std::endl;

    list.pop_back();
    std::cout << "Removed last element: ";
    for(int i = 0; i < list.size(); i++) {
        if(i == list.size()-1) {
            std::cout << list[i];
        }
        else {
            std::cout << list[i] << ", "; //1.5 2 3.1
        }
    }
    std::cout << std::endl;

    list.pop_back(1);
    std::cout << "Removed second element: ";
    for(int i = 0; i < list.size(); i++) {
        if(i == list.size()-1) {
            std::cout << list[i];
        }
        else {
            std::cout << list[i] << ", "; //1.5 3.1
        }
    }

   std::cout << std::endl;
   list.clear();
   for(int i = 0; i < list.size(); i++) {
        std::cout << list[i] << ", "; //print nothing
    }
    std::cout << std::endl;

    return 0;
}