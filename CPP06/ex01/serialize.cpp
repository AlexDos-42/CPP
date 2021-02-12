#include "serialize.hpp"

void	*serialize(void)
{
	Data		*data = new Data();
	std::string	randAlpha("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");

	std::srand(time(NULL));
	for (int i = 0; i < 8; i++){
		data->s1 += randAlpha[rand() % randAlpha.length()];
		data->s2 += randAlpha[rand() % randAlpha.length()];
	}
	data->n = std::rand();
	std::cout << "\e[91mValues of data serialize:\n\e[0m\t"
			<< data->s1 << " " << data->n << " " << data->s2 << std::endl;
	//std::cout << "\e[91mSize of raw on IOS:\n\t\e[0m";
	//std::cout << sizeof(data->s1) + sizeof(data->s1) + sizeof(data->n) << std::endl;
	return (reinterpret_cast<void*>(data));
}

Data	*deserialize(void *raw)
{
	Data *data;

	data = reinterpret_cast<Data*>(raw);
	return (data);
}