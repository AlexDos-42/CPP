#ifndef EASYFIND
# define EASYFIND

# include <iostream>

class NotFound: public std::exception
{
	public:
	virtual const char *what() const throw(){
		return ("Element not found");
	};
};

template <typename T>
typename T::const_iterator easyfind(T const &cont, int n)
{
	typename T::const_iterator it;

	it = find(cont.begin(), cont.end(), n);
	if (it != cont.end())
		std::cout << "Element " << n << " at position " << distance(cont.begin(), it) << std::endl;
	else
		throw NotFound();
	return it;
}

#endif