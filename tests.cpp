#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include "doctest.h"
#include <iostream>
#include "MyVector.h"

MyVector<double> v1;
MyVector<std::string> v2;

TEST_CASE("Default Vector") {
    CHECK(v1.size() == 0);
    CHECK(v1.capacity() == 10);
    CHECK(v1.empty() == true);

    CHECK(v2.size() == 0);
    CHECK(v2.capacity() == 10);
    CHECK(v2.empty() == true);
}

TEST_CASE("Push Back") {
    v1.push_back(1.2);
    v1.push_back(2.3);
    v1.push_back(3.4);
    v1.push_back(4.5);
    v1.push_back(5.6);
    v1.push_back(6.7);
    v1.push_back(7.8);
    v1.push_back(8.9);
    v1.push_back(9.1);
    v1.push_back(10.1);
    v1.push_back(11.2);
    v1.push_back(12.3);
    double arr1[] = {1.2, 2.3, 3.4, 4.5, 5.6, 6.7, 7.8, 8.9, 9.1, 10.1, 11.2, 12.3};
    for(int i = 0; i < v1.size(); i++) {
        CHECK(v1[i] == arr1[i]);
    }

    v2.push_back("H3llo,");
    v2.push_back("my_");
    v2.push_back("n@Me");
    v2.push_back("1S");
    v2.push_back("ELL3N!");
    std::string arr2[] = {"H3llo,", "my_", "n@Me", "1S", "ELL3N!"};
    for(int i = 0; i < v2.size(); i++) {
        CHECK(v2[i] == arr2[i]);
    }
}

TEST_CASE("Size") {
    CHECK(v1.size() == 12);
    CHECK(v2.size() == 5);
}

TEST_CASE("Capacity") {
    CHECK(v1.capacity() == 12);
    CHECK(v2.capacity() == 10);
}

TEST_CASE("Pop Back at index") {
    v1.pop_back(2);
    v1.pop_back(5);
    v1.pop_back(9);
    double arr1[] = {1.2, 2.3, 4.5, 5.6, 6.7, 8.9, 9.1, 10.1, 11.2};
    for(int i = 0; i < v1.size(); i++) {
        CHECK(v1[i] == arr1[i]);
    }

    v2.pop_back(1);
    v2.pop_back(3);
    std::string arr2[] = {"H3llo,", "n@Me", "1S"};
    for(int i = 0; i < v2.size(); i++) {
        CHECK(v2[i] == arr2[i]);
    }
    std::cout << std::endl;
}

TEST_CASE("Pop Back") {
    for(int i = 0; i < 5; i++) {
        v1.pop_back();
    }
    double arr1[] = {1.2, 2.3, 4.5, 5.6};
    for(int i = 0; i < v1.size(); i++) {
        CHECK(v1[i] == arr1[i]);
    }

    for(int i = 0; i < 3; i++) {
        v2.pop_back();
    }
    std::string arr2[] = {};
    for(int i = 0; i < v2.size(); i++) {
        CHECK(v2[i] == arr2[i]);
    }
    CHECK(v2.empty() == true);
}