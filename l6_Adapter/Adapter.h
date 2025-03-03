#pragma once

#include "Old_system.h"
#include "New_system.h"
#include <iostream>

class Adapter : public NewSystem {
public:
    Adapter() { old_system_ = new OldSystem(); }
    void new_request() override {
        old_system_->old_request();
    }
private:
    OldSystem* old_system_;
};