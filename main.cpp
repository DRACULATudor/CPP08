#include "easyfind.hpp"
#include "easyfind.tpp"
#include <vector>
#include <list>
#include <set>

int main(void)
{
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    std::list<int> list;
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);

    try
    {
        easyfind(vec, 1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return(0
    );
}