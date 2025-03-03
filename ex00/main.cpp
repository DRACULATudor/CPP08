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

    std::set<int> sety;
    sety.insert(1);
    sety.insert(2);
    sety.insert(3);

    try
    {
        std::cout << "Vector as container :" << std::endl;
        easyfind(vec, 1);
        std::cout << "List as container :" << std::endl;
        easyfind(list, 2);
        std::cout << "Set as container :" << std::endl;
        easyfind(sety, 3);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return(0);
}
