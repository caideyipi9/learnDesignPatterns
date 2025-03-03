#include "Prototype.h"

int main() {
    // 创建原型对象
    ConcretePrototype prototype("Original Data");

    // 克隆原型对象
    std::unique_ptr<Prototype> clone = prototype.clone();

    // 打印原型和克隆对象
    prototype.print();
    clone->print();

    return 0;
}