#pragma once

#include "Product.h"

class Builder {
public:
    virtual void buildPartA() = 0;
    virtual void buildPartB() = 0;
    virtual Product* getResult() = 0;

protected:
    Product* product;
};

class ConcreteBuilder : public Builder {
public:
    void buildPartA() override;
    void buildPartB() override;
    Product* getResult() override;
};

void ConcreteBuilder::buildPartA() {
    // build part A
    this->product->setPartA(1);
}

void ConcreteBuilder::buildPartB() {
    // build part B
    this->product->setPartB(2);
}

Product* ConcreteBuilder::getResult() {
    return this->product;
}