#include "Span.hpp"

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    //Proof of handling full Span
    try
    {
        Span wrg(1);
        Span srg(wrg);
    
        wrg.addNumber(2);
        wrg.addNumber(3);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    //Proof of handling empy/one elem in the Spam
    try
    {
        Span blg(1);
        Span flg;

        std::cout << blg.longestSpan() <<  std::endl;
        std::cout << flg.shortestSpan() <<  std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    //Mult numbers
    try
    {
        Span lol(334);
        lol.addMultipleNumbers(332);
        std::cout << lol.longestSpan() <<  std::endl;
        std::cout << lol.shortestSpan() <<  std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
