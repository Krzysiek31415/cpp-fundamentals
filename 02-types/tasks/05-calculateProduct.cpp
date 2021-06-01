#include <iostream>
#include <memory>

// TODO: Implement calculateProduct()
// It should take 2 int values and return their product as a shared_ptr.
// Additionally, check how many owners are there.
static std::shared_ptr<int> calculateProduct(int a, int b)
{
    std::shared_ptr<int> product = std::make_shared<int>(a*b);
    std::cout<<"\tnumber of shared_ptr set on object in calculateProduct function: " <<
    product.use_count()<<"\n\taddress: "<<product<<std::endl;
    return product;
}

int main() {
    auto number = calculateProduct(10, 20);
    std::cout << "num: " << *number << " | owners: " << number.use_count() << "\n";
    std::cout<<"address: "<<number<<std::endl;
    return 0;
}
