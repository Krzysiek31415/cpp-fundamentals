#include <iostream>
#include <memory>

// TODO: Implement foo()
// It should take shared_ptr to int and assign value 20 to the pointed int.
// It should also display the value of this int and the number of how many pointers are pointing to it - use `use_count()`.
// Display the same information in main() before and after calling foo()
void foo(std::shared_ptr<int> ptr)
{
    *ptr=20;
    std::cout<<"    the value in the foo function: "<<*ptr<<std::endl;
    std::cout<<"    number of ptr in foo function: "<<ptr.use_count()<<std::endl;
}

int main() {
    //std::shared_ptr<int> number = std::make_shared<int>(10);
    std::shared_ptr<int> number = std::shared_ptr<int>{new int{14}};
    // display the value under number pointer and use_count() of it
    std::cout<<"the value in the main function: "<<*number<<std::endl;
    std::cout<<"number of ptr in main function: "<<number.use_count()<<std::endl;
    foo(number);
    // display the value under number pointer and use_count() of it
    std::cout<<"the value in the main function: "<<*number<<std::endl;
    std::cout<<"number of ptr in main function: "<<number.use_count()<<std::endl;

    return 0;
}
