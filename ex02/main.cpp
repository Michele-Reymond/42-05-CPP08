#include <iostream>
#include <list>
#include <stack>
#include <iterator>
#include "MutantStack.hpp"

#define COLOR_RESET     "\x1b[0m"
#define COLOR           "\x1b[35m"

void makeMutantStack() {
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
}

void makeListStack() {
    std::list<int> mstack;
    mstack.push_back(5);
    mstack.push_back(17);
    std::cout << mstack.back() << std::endl;
    mstack.pop_back();
    std::cout << mstack.size() << std::endl;
    mstack.push_back(3);
    mstack.push_back(5);
    mstack.push_back(737);
    //[...]
    mstack.push_back(0);
    std::list<int>::iterator it = mstack.begin();
    std::list<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
}

void myTests() {
    MutantStack<int> mstack;
    mstack.push(1);
    mstack.push(2);
    mstack.push(3);
    mstack.push(4);
    mstack.push(5);
    mstack.push(6);

    MutantStack<int>::iterator ite = mstack.end();
    std::cout << "mutantStack: ";
    for (MutantStack<int>::iterator it = mstack.begin(); it != ite; ++it) {
        std::cout << *it << ", ";
    }
    std::cout << std::endl;

    std::cout << std::endl <<  "Top element: " << mstack.top() << std::endl;
     std::cout << std::endl <<  "Top element: " << *mstack.c.begin() << std::endl;
    
}

int main() {
    std::cout << std::endl << COLOR "__________ TEST 1 : given main with mutant stack __________" COLOR_RESET << std::endl;
    makeMutantStack();
    std::cout << std::endl << COLOR "__________ TEST 2 : given main with list stack __________" COLOR_RESET << std::endl;
    makeListStack();
    std::cout << std::endl << COLOR "__________ TEST 3 : my tests __________" COLOR_RESET << std::endl;
    myTests();
    return 0;
}

//Refs

// https://en.cppreference.com/w/cpp/container/stack
// https://cplusplus.com/reference/queue/queue/
// https://www.codeguru.com/cplusplus/an-introduction-to-sequence-containers-in-c/
// /opt/homebrew/Cellar/gcc/12.2.0/include/c++/12/bits/stl_stack.h

// in the stack header there is this variable:
// protected:
//       //  See queue::c for notes on this name.
//       _Sequence c;
