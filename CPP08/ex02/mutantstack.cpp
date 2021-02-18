#include "mutantstack.hpp"

template<typename T>
MutantStack<T> & MutantStack<T>::operator=(const MutantStack<T> & rhs) {
	if (this != &rhs)
		this->c = rhs.c;
	return *this;
}