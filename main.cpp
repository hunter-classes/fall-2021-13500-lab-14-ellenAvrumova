#include <iostream>
#include "MyVector.h"

int main() {
    MyVector<int> v;
    std::cout << v.size() << std::endl; //0
    std::cout << v.capacity() << std::endl; //10
    std::cout << v.empty() << std::endl; //true

    v.push_back(1);
    for(int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " "; //1
    }
    std::cout << std::endl;

    MyVector<double> list;
    list.push_back(1.0);
    list.push_back(2);
    list.push_back(3.1);
    list.push_back(4);

    for(int i = 0; i < list.size(); i++) {
        if(i == list.size()-1) {
            std::cout << list[i];
        }
        else{
            std::cout << list[i] << ", "; //1.0, 2, 3.1, 4
        }
    }
    std::cout << std::endl;
    /*
    list.pop_back();
    for(int i = 0; i < list.size(); i++) {
        std::cout << list[i] << ", "; //1.0 2 3.1
    }
    std::cout << std::endl;

    list.pop_back(1);
    for(int i = 0; i < list.size(); i++) {
        std::cout << list[i] << ", "; //1.0 3.1
    }
   */
   std::cout << std::endl;
   list.clear();
   for(int i = 0; i < list.size(); i++) {
        std::cout << list[i] << ", "; //print nothing
    }

    return 0;
}