#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

class NotFoundException : public std::exception {
   const char * what () const throw () {
      return "easyfind found nothing";
   }
};

template <typename T>
typename T::const_iterator easyfind(T &param, int find) {
    typename T::const_iterator fisrt;

    for (fisrt = param.begin(); fisrt != param.end(); ++fisrt) {
        if (*fisrt == find)
            return (fisrt);
    }
    throw NotFoundException();
}

#endif
