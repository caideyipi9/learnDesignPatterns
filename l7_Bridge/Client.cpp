#include "Bridge.h"

int main() {
    // 创建红色圆形
    std::unique_ptr<Shape> redCircle = std::make_unique<Circle>(std::make_unique<Red>());
    redCircle->draw();

    // 创建蓝色矩形
    std::unique_ptr<Shape> blueRectangle = std::make_unique<Rectangle>(std::make_unique<Blue>());
    blueRectangle->draw();

    return 0;
}