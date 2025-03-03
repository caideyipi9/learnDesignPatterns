#pragma once

#include "Builder.h"

class Director {
public:
    virtual void setBuilder(Builder* builder) = 0;
    virtual void construct() = 0;

    protected:
    Builder* builder;
};

class ConcreteDirector : public Director {
public:
    void setBuilder(Builder* builder) override;
    void construct() override;
};

void ConcreteDirector::setBuilder(Builder* builder) {
    this->builder = builder;
}

void ConcreteDirector::construct() {
    this->builder->buildPartA();
    this->builder->buildPartB();
}