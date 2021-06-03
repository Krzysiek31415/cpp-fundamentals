#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count)
{
    std::vector<std::shared_ptr<int>> vec;
    for(size_t i = 0; i < count; ++i)
    {
        vec.push_back(std::make_shared<int>(i));
    }
    return vec;
}
void print(std::vector<std::shared_ptr<int>> vec)
{
    for(const auto &elem: vec)
    {
        std::cout<<*elem<<" | ";
    }
    std::cout<<std::endl;
}

void add10(std::vector<std::shared_ptr<int>> vec)
{
    for(const auto &elem: vec)
    {
        *elem+=10;
    }
}
void sub10(int const *ptr);
void sub10(std::vector<std::shared_ptr<int>> vec);