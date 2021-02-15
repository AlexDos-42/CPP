#include "whatever.hpp"

int	main(void)
{
	int a = 2;
	int b = 3;

	std::cout << "\e[94m--Int--\e[0m" << std::endl;
	std::cout << "a = " << a << " & b = " << b << std::endl;
	std::cout << "Swap:" << std::endl;
	::swap(a, b);
	std::cout << "a = " << a << " & b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;


	std::cout << "\e[94m--Sring--\e[0m" << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";

	std::cout << "c = " << c << " & d = " << d << std::endl;
	std::cout << "Swap:" << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << " & d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c, d) = " << ::max(c, d) << std::endl;

	std::cout << "\e[94m--Float--\e[0m" << std::endl;
	float e = 0.45;
	float f = 0.46;

	std::cout << "e = " << e << " & f = " << f << std::endl;
	std::cout << "min(e, f) = " << ::min(e, f) << std::endl;
	std::cout << "max(e, f) = " << ::max(e, f) << std::endl;
	std::cout << "\e[94m--Double--\e[0m" << std::endl;
	double g = 4500323;
	double h = 8092839130;

	std::cout << "g = " << g << " & h = " << h << std::endl;
	std::cout << "min(g, h) = " << ::min(g, h) << std::endl;
	std::cout << "max(g, h) = " << ::max(g, h) << std::endl;

	return (0);
}