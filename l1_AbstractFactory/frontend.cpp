#include "Factory.h"

void CreateUI(Factory& factory) {
    auto button = factory.CreateButton();
    auto window = factory.CreateWindow();
    button->Draw();
    window->Draw();
}

int main() {
    WinFactory winFactory;
    CreateUI(winFactory);
    
    LinuxFactory linuxFactory;
    CreateUI(linuxFactory);
    return 0;
}