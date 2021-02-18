#include "mutantstack.hpp"

template<typename T>
MutantStack<T> & MutantStack<T>::operator=(const MutantStack<T> & copy)
{
	if (this != &copy)
		this->c = copy.c;
	return *this;
}