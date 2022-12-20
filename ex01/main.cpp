#include <iostream>
#include "Span.hpp"

#define COLOR_RESET     "\x1b[0m"
#define COLOR           "\x1b[2m"

int main() {
    // Span test(10);

    // try
    // {
    //    test.shortestSpan();
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << "Error: " << e.what() << '\n';
    // }
    // test.addNumber(-20);
    // test.displayList();
    // test.addNumber(3);
    // test.displayList();
    // test.addNumber(0);
    // test.displayList();
    // test.addNumber(12);
    // test.displayList();
    // test.addNumber(87);
    // test.addNumber(-40);
    // test.displayList();
    // test.addNumber(23);
    // test.displayList();
    // test.addNumber(-1);
    // test.displayList();
    // test.addNumber(12);
    // test.displayList();
    // test.addNumber(120);
    // test.displayList();
    // try
    // {
    //    test.addNumber(13);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << "Error: " << e.what() << '\n';
    // }

    // std::cout << std::endl;
    // std::cout << "shortes: " << test.shortestSpan() << std::endl;
    // std::cout << "longest: " << test.longestSpan() << std:: endl;

    // test avec une range liste!
    std::vector<int> v1(10, 3);
    Span rangeSpan(v1.begin(), v1.begin() + 5);
    rangeSpan.displayList();
    std::cout << std::endl;
    std::vector<int> v2(10000, 3);
    Span bigRangeSpan(v2.begin(), v2.end());
    bigRangeSpan.displayList();
    return 0;
}

// // Main donné
// int main()
// {
// Span sp = Span(5);
// sp.addNumber(6);
// sp.addNumber(3);
// sp.addNumber(17);
// sp.addNumber(9);
// sp.addNumber(11);
// std::cout << sp.shortestSpan() << std::endl;
// std::cout << sp.longestSpan() << std::endl;
// return 0;
// }