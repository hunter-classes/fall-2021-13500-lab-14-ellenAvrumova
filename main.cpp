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

    return 0;
}