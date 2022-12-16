#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <iterator>

template<typename T>
class MutantStack : public std::stack<T> {

    public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    MutantStack() {}
	MutantStack(const MutantStack<T>& instance) { *this = instance; }
    ~MutantStack() {}

	MutantStack<T>& operator=(const MutantStack<T>& instance) {
		this->c = instance.c;
		return *this;
	}

    iterator begin() { return this->c.begin(); }
	iterator end() { return this->c.end(); }
};

#endif
