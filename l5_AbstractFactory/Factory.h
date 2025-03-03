#pragma once

#include "Window.h"
#include "Botton.h"

class Factory {
public:
    virtual std::unique_ptr<Window> CreateWindow() = 0;
    virtual std::unique_ptr<Button> CreateButton() = 0;
};


class WinFactory : public Factory {
public:
    std::unique_ptr<Window> CreateWindow() override {
        return std::unique_ptr<WinWindow>();
    }
    std::unique_ptr<Button> CreateButton() override {
        return std::unique_ptr<WinButton>();
    }

};


class LinuxFactory : public Factory {
public:
    std::unique_ptr<Window> CreateWindow() override {
        return std::unique_ptr<LinuxWindow>();
    }
    std::unique_ptr<Button> CreateButton() override {
        return std::unique_ptr<LinuxButton>();
    }
};