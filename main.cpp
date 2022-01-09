#include <iostream>
#include "MyVector.h"

int main() {
    MyVector<int> v;
    std::cout << v.size() << std::endl; //0
    std::cout << v.capacity() << std::endl; //10

    return 0;
}