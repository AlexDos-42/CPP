#include "span.hpp"

int main()
{
	std::cout << "\e[94m### Subject Test ###\e[0m" << std::endl;
	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "\e[94m### My Tests ###\e[0m" << std::endl;

	Span sp2 = Span(5);

	try
	{
		sp2.addNumber(2);
		sp2.addNumber(1230);
		sp2.addNumber(70);
		sp2.addNumber(240);
		sp2.addNumber(3);
		sp2.display();
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
		sp2.addNumber(42);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	Span sp3 = Span(2);
	try
	{
		sp3.addNumber(2147483647);
		sp3.addNumber(-2147483648);
		sp3.display();
		std::cout << sp3.shortestSpan() << std::endl;
		std::cout << sp3.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	Span sp4 = Span(5);
	sp4.display();
	try
	{
		std::cout << sp4.shortestSpan() << std::endl;
		std::cout << sp4.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	Span sp5 = Span(5);
	try
	{
		sp5.addNumber(-30);
		sp5.addNumber(14);
		sp5.addNumber(22);
		sp5.addNumber(-8);
		sp5.addNumber(-2);
		sp5.display();
		std::cout << sp5.shortestSpan() << std::endl;
		std::cout << sp5.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	Span sp6 = Span(5000);
	try
	{
		sp6.addNumber(-2500, 2500);
		std::cout << sp6.shortestSpan() << std::endl;
		std::cout << sp6.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}