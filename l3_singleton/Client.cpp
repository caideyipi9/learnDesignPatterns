#include "Singleton.h"
#include <iostream>

Singleton* Singleton::instance = nullptr;

int main() {
    Singleton* s1 = Singleton::getInstance();
    Singleton* s2 = Singleton::getInstance();

    if (s1 == s2) {
        std::cout << "Singleton works, both variables contain the same instance." << std::endl;
    } else {
        std::cout << "Singleton failed, variables contain different instances." << std::endl;
    }

    return 0;
}