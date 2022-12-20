#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

class Span {

    public:
        Span(unsigned int n);
        Span(std::vector<int>::const_iterator start, std::vector<int>::const_iterator end);
        Span(const Span& instance);
        ~Span();

        Span    &operator=(const Span &instance);

        void        addNumber(int i);
        void        displayList();
        int         shortestSpan();
        int         longestSpan();


        class FullSpanException : public std::exception {
            public:
                virtual const char* what() const throw() {
                    return "The span is full";	
                }
        };

        class NothingFoundExeption : public std::exception {
            public:
                virtual const char* what() const throw() {
                    return "Nothing found in the span";	
                }
        };


    private:
        Span();

        int                 _n;
        int                 _stock;
        std::vector<int>    *_lst;
};

#endif
