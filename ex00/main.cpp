#include "easyfind.hpp"
#include "easyfind.tpp"
#include <vector>
#include <list>
#include <deque>

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

    std::deque<int> deq;
    deq.push_back(1);
    deq.push_back(2);
    deq.push_back(3);

    try
    {
        std::cout << "Vector as container :" << std::endl;
        easyfind(vec, 1);
        std::cout << "List as container :" << std::endl;
        easyfind(list, 2);
        std::cout << "Deque as container :" << std::endl;
        easyfind(deq, 3);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return(0);
}
