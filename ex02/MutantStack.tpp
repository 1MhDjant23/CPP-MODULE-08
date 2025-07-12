#include "MutantStack.hpp"

template <class T>
MutantStack<T>::MutantStack() : std::stack<T>() {}

template <class T>
MutantStack<T>::~MutantStack(){}

template <class T>
MutantStack<T>::MutantStack(const MutantStack& other)  {
    this = other;
}

// template <class T>
// typename std::stack<T>::container_type::iterator    MutantStack<T>::iterator() const {

// }


template <class T>
const MutantStack<T>&  MutantStack<T>::operator=(const MutantStack& other) {
    if (this != &other)
    {
    }
    return *this;    
}


template <class T>
typename iterator    MutantStack<T>::begin()  {
    return this->c.begin();
}

template <class T>
typename iterator    MutantStack<T>::end()  {
    return this->c.end();
}