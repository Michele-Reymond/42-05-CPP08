#include "easyfind.hpp"
#include <vector>

void displayInt(int i) {
    std::cout << i << std::endl;
}

int main() {
    std::vector<int> lst;

    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);
    lst.push_back(4);
    lst.push_back(5);
    lst.push_back(6);
    lst.push_back(7);
    lst.push_back(8);
    lst.push_back(9);
    lst.push_back(10);

    for_each(lst.begin(), lst.end(), displayInt);
    std::cout << std::endl;
    std::vector<int>::const_iterator find = easyfind(lst, 5);
    std::cout << "easyfind found: " << *find << std::endl;
    std::cout << std::endl;

    try
    {
        std::vector<int>::const_iterator find2 = easyfind(lst, 11);
        std::cout << "easyfind found: " << *find2 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << '\n';
    }
    
}