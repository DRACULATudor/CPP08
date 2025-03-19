#include "MutantStack.hpp"
#include "MutantStack.tpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}

// TEST w more clarity
//  int main()
//  {

//      MutantStack<int> mstack;
//      mstack.push(1);
//      mstack.push(2);
//      mstack.push(3);
//      mstack.push(4);
//      std::cout << mstack.top() << std::endl;
//      mstack.pop();
//      std::cout << mstack.top() << std::endl;

//      MutantStack<int>::iterator it = mstack.begin();
//      MutantStack<int>::iterator ite = mstack.end();
//     std::cout << "Int Stack below" << std::endl;
//     std::cout << std::endl;

//      while (it != ite)
//      {
//          std::cout << *it << std::endl;
//          ++it;
//      }
//      std::cout << "Assigned the Int Stack below to another stack" << std::endl;
//      std::cout << std::endl;
//      MutantStack<int> astack = mstack;
//      MutantStack<int>::iterator asit = astack.begin();
//      MutantStack<int>::iterator asite = astack.end();
//      while (asit != asite)
//      {
//          std::cout << *asit << std::endl;
//          ++asit;
//      }

//      MutantStack<char> cstack;
//      cstack.push('h');
//      cstack.push('e');
//      cstack.push('y');
//      cstack.push(' ');
//      cstack.push('b');
//      cstack.push('r');
//      cstack.push('o');
//      MutantStack<char>::iterator ct = cstack.begin();
//      MutantStack<char>::iterator ict = cstack.end();
//      ct = cstack.begin();
//      ++ct;
//      --ct;
//      std::cout << std::endl;
//      std::cout << "Char Stack below" << std::endl;
//      while (ct != ict)
//      {
//          std::cout << *ct << std::endl;
//          ++ct;
//      }
//      std::cout << std::endl;
//      std::cout << "Copy of Char Stack below" << std::endl;

//      MutantStack<char> s(cstack);
//      MutantStack<char>::iterator pct = s.begin();
//      MutantStack<char>::iterator zict = s.end();

//      while (pct != zict)
//      {
//          std::cout << *pct << std::endl;
//          ++pct;
//         }

//      return 0;
//  }

// Test w lists replacement

// int main()
// {
//     std::list<int> mlist;
//     mlist.push_back(5);
//     mlist.push_back(17);
//     std::cout << mlist.back() << std::endl;
//     mlist.pop_back();
//     std::cout << mlist.size() << std::endl;
//     mlist.push_back(3);
//     mlist.push_back(5);
//     mlist.push_back(737);
//     //[...]
//     mlist.push_back(0);
//     std::list<int>::iterator it = mlist.begin();
//     std::list<int>::iterator ite = mlist.end();
//     while (it != ite)
//     {
//         std::cout << *it << std::endl;
//         ++it;
//     }
//     it = mlist.begin();
//     ++it;
//     --it;
//     while (it != ite)
//     {
//         std::cout << *it << std::endl;
//         ++it;
//     }
//     return (0);
// }
