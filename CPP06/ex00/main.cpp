#include "convert.hpp"

int	main(int ac, char *av[])
{
	if (ac != 2)
	{
		std::cerr << "Error: arguments" << std::endl;
		return (1);
	}
	Convert a(av[1]);
	std::cout << a;

	return (0);
}