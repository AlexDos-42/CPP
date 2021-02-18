#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat julie("Julie", 3);
	Bureaucrat boby("Boby", 149);

	std::cout << "\e[91m############## ex00 ##############=\e[0m" << std::endl;
	std::cout << julie;
	try
	{
		julie.increase();
		julie.increase();
		std::cout << julie;
		julie.increase();
		std::cout << julie;
	}
	catch (std::exception &ex)
	{
		std::cerr << ex.what() << std::endl;
	}
	std::cout << julie;
	std::cout << std::endl;

	std::cout << boby;
	try
	{
		boby.increase();
		std::cout << boby;
		boby.decrease();
		boby.decrease();
		std::cout << boby;
		boby.decrease();
		boby.decrease();
		std::cout << boby;
	}
	catch (std::exception &ex)
	{
		std::cerr << ex.what() << std::endl;
	}
	std::cout << boby;
	std::cout << std::endl;

	try
	{
		Bureaucrat alex("Alex", 1);
		Bureaucrat jimmy("Jimmy", 50);
		std::cout << alex << jimmy;
		Bureaucrat tommy("Tommy", 0);
		std::cout << tommy;
		
	}
	catch (std::exception &ex)
	{
		std::cerr << ex.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat mary("Mary", 151);
		std::cout << mary;
	}
	catch (std::exception &ex)
	{
		std::cerr << ex.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat elody(julie);
		std::cout << elody;
	}
	catch (std::exception &ex)
	{
		std::cerr << ex.what() << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << "\e[91m############## ex01 ##############=\e[0m" << std::endl;
	Form A150("A150", 150, 150);
	Form B149("B149", 149, 150);
	Form Z111("B149", 150, 149);
	std::cout << boby << julie;
	std::cerr << A150;
	try
	{
		boby.signForm(A150);
		std::cerr << A150;
	}
	catch (std::exception &ex)
	{
		std::cerr << ex.what() << std::endl;
	}
	try
	{
		boby.signForm(B149);
	}
	catch (std::exception &ex)
	{
		std::cerr << ex.what() << std::endl;
	}
	std::cerr << B149;
	try
	{
		Form C1313("C1313", 1, 0);
		std::cerr << C1313;
		boby.signForm(C1313);
	}
	catch (std::exception &ex)
	{
		std::cerr << ex.what() << std::endl;
	}
	try
	{
		Form C1121("C1121", 1, 151);
		std::cerr << C1121;
		boby.signForm(C1121);
	}
	catch (std::exception &ex)
	{
		std::cerr << ex.what() << std::endl;
	}
	return (0);
}