#include "serialize.hpp"

void	*serialize(void)
{
	char		*data = new char[16 + sizeof(int)];
	std::string	randAlpha("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");

	std::srand(time(NULL));
	for (int i = 0; i < 8; i++){
		data[i] = randAlpha[rand() % randAlpha.length()];
		data[i + 8 + sizeof(int)] = randAlpha[rand() % randAlpha.length()];
	}
	*reinterpret_cast<int*>(data + 8) = std::rand();
	return (data);
}

Data	*deserialize(void *raw)
{
	Data *data = new Data;

	data->s1 = std::string(reinterpret_cast<char*>(raw), 8);
	data->n = *reinterpret_cast<int*>(reinterpret_cast<char*>(raw) + 8);
	data->s2 = std::string(reinterpret_cast<char*>(raw) + 8 + sizeof(int), 8);
	return (data);
}