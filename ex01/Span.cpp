#include "Span.hpp"
#include <climits>

Span::Span(): _N(), _vec(2){}

Span::Span(unsigned int N):_N(N), _vec() {}

Span::Span(const Span& copy)
{
    _N = copy._N;
    _vec = copy._vec;
}

Span &Span::operator=(const Span &assign)
{
    if (this != &assign)
    {
        _N = assign._N;
        _vec = assign._vec;
    }
    return *this;
}

void Span::addNumber(int n)
{
    if (_vec.size() < _N)
    {
        _vec.push_back(n);
        return;
    }
    throw SpanIsFull();
}

int Span::shortestSpan()
{
    if (_vec.size() >= 2)
    {
        std::sort(_vec.begin(), _vec.end());
        std::vector<int>::iterator sit;
        int distance = INT_MAX;
        for (std::vector<int>::iterator it = _vec.begin(); it != _vec.end() - 1; it++)
        {
            sit = it + 1;
            if (*sit - *it < distance)
            {
                distance = *sit - *it;
            }
        }
        return distance;
    }
    else
        throw SpanIsEmpty();
}

int Span::longestSpan()
{
    if (_vec.size() >= 2)
    {
        std::sort(_vec.begin(), _vec.end());
        std::vector<int>::iterator sit;
        return *(_vec.end() -1) - *(_vec.begin());
    }
    else
        throw SpanIsEmpty();
}

const char *Span::SpanIsFull::what() const throw()
{
    return "Span is full !";
}

const char *Span::SpanIsEmpty::what() const throw()
{
    return "Span is empty/only one element !";
}

Span::~Span(){}
