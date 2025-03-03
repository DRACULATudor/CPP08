#pragma once
#include <cstdlib>
#include <string>
#include <iomanip>
#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>
#include <iterator>

class Span
{
private:
unsigned int _N;
    std::vector<int> _vec;
public:
    Span();
    Span(unsigned int N);
    Span(const Span &copy);
    Span &operator=(const Span &assign);
    void addNumber(int n);
    int shortestSpan();
    int longestSpan();
    class SpanIsFull : public std::exception{
        public:
            const char *what() const throw();
    };
    class SpanIsEmpty : public std::exception{
        public:
            const char *what() const throw();
    };
    ~Span();
};
