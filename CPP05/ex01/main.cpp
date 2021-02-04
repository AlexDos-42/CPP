#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat julie("Julie", 3);
	Bureaucrat boby("Boby", 149);

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
	return (0);
}