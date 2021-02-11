#include "serialize.hpp"

int	main(void)
{
	void *raw = serialize();
	Data *data = deserialize(raw);

	std::cout << data->s1 << " " << data->n << " " << data->s2 << std::endl;

	delete static_cast<char*>(raw);
	delete data;

	return (0);
}