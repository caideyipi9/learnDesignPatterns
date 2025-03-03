#include <iostream>
#include <memory>
#include <string>

// 抽象原型类
class Prototype {
public:
    virtual ~Prototype() = default;
    virtual std::unique_ptr<Prototype> clone() const = 0;
    virtual void print() const = 0;
};

// 具体原型类
class ConcretePrototype : public Prototype {
private:
    std::string data;

public:
    ConcretePrototype(const std::string& data) : data(data) {}

    // 实现克隆方法
    std::unique_ptr<Prototype> clone() const override {
        return std::make_unique<ConcretePrototype>(*this);
    }

    // 打印数据
    void print() const override {
        std::cout << "ConcretePrototype with data: " << data << std::endl;
    }
};