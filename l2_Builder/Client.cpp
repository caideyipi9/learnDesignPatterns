#include "Product.h"
#include "Builder.h"
#include "Director.h"

int main() {
    // Init
    ConcreteDirector director;
    Builder* builder = new ConcreteBuilder();
    
    // Construct
    director.setBuilder(builder);
    director.construct();
    Product* product = builder->getResult();
    
    // Show
    product->show();
    
    return 0;
}