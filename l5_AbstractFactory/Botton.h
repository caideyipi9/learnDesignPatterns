#pragma once
#include <iostream>

class Button {
public:
    virtual void Draw() = 0;
};

class WinButton : public Button {
public:
    void Draw() override;
};

class LinuxButton : public Button {
public:
    void Draw() override;
};

void WinButton::Draw() {
    // draw button in windows style
    std::cout << "Client want to do some thing in Win" << std::endl;
}

void LinuxButton::Draw() {
    // draw button in linux style
    std::cout << "Client want to do some thing in Linux" << std::endl;
}