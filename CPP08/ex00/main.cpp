#include "easyfind.hpp"
#include <list>
#include <vector>

int	main(void)
{
	std::vector<int> vector(7, 5);
	int a = 5, b = 6;

	std::cout << "\e[94mSearch in vector:\e[0m"<< std::endl;
    try {
		easyfind(vector, a);
	}
	catch (std::exception & e) {
		std::cout << e.what() << ": " << a << std::endl;
	}

	try {
		easyfind(vector, b);
	}
	catch (std::exception & e) {
		std::cout << e.what() << ": " << b << std::endl;
	}

    std::list<int> lst;
	a = 8, b = 18;

	lst.push_back(3);
	lst.push_back(45);
	lst.push_back(8);
	lst.push_back(12);
	lst.push_back(20);

	std::cout << "\e[94mSearch in list:\e[0m"<< std::endl;
	try {
		easyfind(lst, a);
	}
	catch (std::exception & e) {
		std::cout << e.what() << ": " << a << std::endl;
	}

	try {
		easyfind(lst, b);
	}
	catch (std::exception & e) {
		std::cout << e.what() << ": " << b << std::endl;
	}
	return (0);
}