#pragma once
#include "easyfind.hpp"

template <typename T>
void easyfind(T &container, int occurance)
{
    typename T::iterator it = std::find(container.begin(), container.end(), occurance) ;
    if (it != container.end())
    {
        std::cout << "Occurance: " << occurance << " has been found in the container!" << std::endl;
        return;
    }
    throw std::out_of_range("Occurance not found");
}
