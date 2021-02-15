#include "array.hpp"

int	main(void)
{
	Array<int> a;
	Array<int> b(5);

	std::cout << a.size() << std::endl << b.size() << std::endl;

	for (int i = 0; i < b.size(); i++)
		std::cout << b[i] << " ";
	std::cout << std::endl;
	for (int i = 0; i < b.size(); i++)
		b[i] = i + 1;

	for (int i = 0; i < b.size(); i++)
		std::cout << b[i] << " ";
	std::cout << std::endl;
	
	try
	{
		std::cout << b[8] << " ";
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	Array<int> c(b);
	for (int i = 0; i < c.size(); i++)
		std::cout << c[i] << " ";
	std::cout << std::endl;
	for (int i = 0; i < b.size(); i++)
		b[i] = i + 15;
	for (int i = 0; i < b.size(); i++)
	{
		std::cout << "b: " << b[i] << "  c: " << c[i];
		std::cout << std::endl;
	}
	std::cout << std::endl;

	Array<int> d = b;
	for (int i = 0; i < d.size(); i++)
		std::cout << d[i] << " ";
	std::cout << std::endl;
	for (int i = 0; i < b.size(); i++)
		b[i] = i + 100;
	for (int i = 0; i < b.size(); i++)
	{
		std::cout << "b: " << b[i] << "  d: " << d[i];
		std::cout << std::endl;
	}

	Array<std::string> str(4);
	str[0] = "Hello";
	str[1] = " ";
	str[2] = "World";
	str[3] = "!";
	for (int i = 0; i < str.size(); i++)
		std::cout << str[i];
	std::cout << std::endl;

	Array<std::string> str2 = str;
	for (int i = 0; i < str2.size(); i++)
		std::cout << str2[i];
	std::cout << std::endl;

	Array<float> fl(5);
	fl[0] = 42.67;
	fl[1] = 343;
	fl[2] = 69.09;
	fl[3] = 0.05;
	fl[4] = 1.234;
	for (int i = 0; i < fl.size(); i++)
		std::cout << fl[i] << " ";
	std::cout << std::endl;

	Array<char> ch(3);
	ch[0] = 97;
	ch[1] = 107;
	ch[2] = 63;
	for (int i = 0; i < ch.size(); i++)
		std::cout << ch[i] << " ";
	std::cout << std::endl;

	return (0);
}