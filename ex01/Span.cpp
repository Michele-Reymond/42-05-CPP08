#include "Span.hpp"

// ---------Constructor and destructor ------------

Span::Span() { }

Span::Span(unsigned int n) : _n(n), _stock(0) {
    this->_lst = new std::vector<int>(n);
    std::cout << "New span created with size : " << (*this->_lst).size() << std::endl;
}

Span::Span(const Span& instance) { *this = instance; }

Span::~Span() {
    delete this->_lst;
}

// --------- Fonctions ------------

void Span::addNumber(int i) {
    if (this->_n == this->_stock)
        throw Span::FullSpanException();
    (*this->_lst)[this->_stock] = i;
    this->_stock++;
}

static void displayElem(int i) {
    std::cout << i << ", ";
}

void Span::displayList() {
    for_each((*this->_lst).begin(), (*this->_lst).end(), displayElem);
    std::cout << std::endl;
}

void Span::fillTheList() {
    srand (time(NULL));
    for (int x : *this->_lst) {
        this->addNumber(rand());
    }

}

int Span::shortestSpan() {
    if (this->_stock == 0 || this->_stock == 1)
        throw Span::NothingFoundExeption();
    int diff = INT_MAX;
    int tab[this->_n];
    int add = 0;

    int min = *min_element(this->_lst->begin(), this->_lst->end());
    if (min < 0)
        add = -min;
    for (int i = 0; i < this->_n; i++)
        tab[i] = (*this->_lst)[i] + add;
 
    for (int i = 0; i < this->_n - 1; i++) {
        for (int j = i + 1; j < this->_n; j++) {
            int res = tab[i] - tab[j];
            if (res < 0)
                res = -res;
            if (res < diff) {
                diff = res;
            }
        }
    }
    return diff;
}

int Span::longestSpan() {
    if (this->_stock == 0 || this->_stock == 1)
        throw Span::NothingFoundExeption();
    int min = *min_element(this->_lst->begin(), this->_lst->end());
    int max = *max_element(this->_lst->begin(), this->_lst->end());
    if (min < 0 && max >= 0) {
        return (max + min);
    }
    else {
        return (max - min);
    }
}


// --------- Operator overload ------------

Span &Span::operator=(const Span &instance) {
    this->_n = instance._n;
    this->_stock = instance._stock;
    this->_lst = new std::vector<int>(this->_n);
    std::vector<int>::const_iterator fisrt;

    for (int i = 0; i < this->_n; i++) 
        (*this->_lst)[i] = (*instance._lst)[i];

    return *this;
}
