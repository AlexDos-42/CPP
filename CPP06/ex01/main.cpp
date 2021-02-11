#include "serialize.hpp"

int	main(void)
{
	void *raw = serialize();
	Data *data = deserialize(raw);
std::cout << sizeof(*data) << std::endl;
	std::cout << "\e[91mValues of data deserialize:\n\t\e[0m";
	std::cout << data->s1 << " " << data->n << " " << data->s2 << std::endl;

	delete data;
	return (0);
}
