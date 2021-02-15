#include <iostream>

template <typename T>
void	iter(T array[], int size, void (*fct)(const T &val))
{
	for (int i = 0; i < size; i++)
		(*fct)(array[i]);
}

template <typename T>
void	display(const T &val)
{
	std::cout << val;
}

template <typename T>
void	displayX2(const T &val)
{
    T tmp = val + val;
	std::cout << tmp;
}