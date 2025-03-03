#pragma once
#include <iostream>

class Window{
    public:
        virtual void Draw() = 0;
};

class WinWindow : public Window {
public:
    void Draw() override;
};

class LinuxWindow : public Window {
public:
    void Draw() override;
};

void WinWindow::Draw() {
    // draw window in windows style
    std::cout << "Drawing window in windows style" << std::endl;
}

void LinuxWindow::Draw() {
    // draw window in linux style
    std::cout << "Drawing window in linux style" << std::endl;
}