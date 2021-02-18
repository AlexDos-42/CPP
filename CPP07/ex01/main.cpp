#include "iter.hpp"

int	main(void)
{
	int arr1[5] = {1, 2, 3, 4, 5};
	iter(arr1, 3, display);
	std::cout << std::endl;
	iter(arr1, 3, displayX2);
	std::cout << std::endl;
	iter(arr1, 5, display);
	std::cout << std::endl;
	iter(arr1, 5, displayX2);
	std::cout << std::endl;

	std::string arr2[4] = {"Hello", " ", "World", "!"};
	iter(arr2, 4, display);
	std::cout << std::endl;
	iter(arr2, 4, displayX2);
	std::cout << std::endl;

	float arr3[5] = {0.2f, 18.6f, 177.68f, 55.4451f, 648.115f};
	iter(arr3, 5, display);
	std::cout << std::endl;
	iter(arr3, 5, displayX2);
	std::cout << std::endl;

	return (0);
}