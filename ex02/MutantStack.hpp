#pragma once
#include <cstdlib>
#include <string>
#include <iomanip>
#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>
#include <iterator>
#include <stack>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack();
    MutantStack(const MutantStack &copy);
    MutantStack &operator=(const MutantStack &assign);
    ~MutantStack();

    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin();
    iterator end();
};
