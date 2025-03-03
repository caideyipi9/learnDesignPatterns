#pragma once

#include <iostream>

class Product {
public:
    void show() {
        // show product
        std::cout << "Product: " << this->partA << " " << this->partB << std::endl;
    };

    void setPartA(int a) {
        // set part A
        this->partA = a;
    };

    void setPartB(int b) {
        // set part B
        this->partB = b;
    };

private:
    int partA = -1;
    int partB = -1;
};