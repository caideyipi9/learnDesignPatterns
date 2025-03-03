#pragma once

#include <iostream>
#include <memory>

// 实现部分：颜色接口
class Color {
public:
    virtual void applyColor() = 0;
    virtual ~Color() = default;
};

// 具体实现：红色
class Red : public Color {
public:
    void applyColor() override {
        std::cout << "Applying red color." << std::endl;
    }
};

// 具体实现：蓝色
class Blue : public Color {
public:
    void applyColor() override {
        std::cout << "Applying blue color." << std::endl;
    }
};

// 抽象部分：形状接口
class Shape {
protected:
    std::unique_ptr<Color> color;

public:
    Shape(std::unique_ptr<Color> color) : color(std::move(color)) {}
    virtual void draw() = 0;
    virtual ~Shape() = default;
};

// 具体抽象：圆形
class Circle : public Shape {
public:
    Circle(std::unique_ptr<Color> color) : Shape(std::move(color)) {}

    void draw() override {
        std::cout << "Drawing a circle. ";
        color->applyColor();
    }
};

// 具体抽象：矩形
class Rectangle : public Shape {
public:
    Rectangle(std::unique_ptr<Color> color) : Shape(std::move(color)) {}

    void draw() override {
        std::cout << "Drawing a rectangle. ";
        color->applyColor();
    }
};
