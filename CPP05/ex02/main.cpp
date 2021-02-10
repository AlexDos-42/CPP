#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	Bureaucrat julie("Julie", 3);
	Bureaucrat boby("Boby", 149);

	std::cout << "############## ex00 ##############" << std::endl;
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
	std::cout << "############## ex01 ##############" << std::endl;
	Form A150("A150", 150, 150);
	Form B149("B149", 149, 150);
	Form Z111("B149", 150, 149);
	std::cout << boby << julie;
	std::cerr << A150;
	try
	{
		A150.beSigned(boby);
		std::cerr << A150;
	}
	catch (std::exception &ex)
	{
		std::cerr << ex.what() << std::endl;
	}
	try
	{
		B149.beSigned(boby);
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
	}
	catch (std::exception &ex)
	{
		std::cerr << ex.what() << std::endl;
	}
	try
	{
		Form C1121("C1121", 1, 151);
		std::cerr << C1121;
	}
	catch (std::exception &ex)
	{
		std::cerr << ex.what() << std::endl << std::endl;
	}

	std::cout << "############## ex02 ##############" << std::endl;

	Bureaucrat jim("Jim", 138);

	Form *a = new ShrubberyCreationForm("A");

	std::cout << jim;
	std::cout << *a;
	
	try
	{
		jim.signForm(*a);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		jim.executeForm(*a);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	jim.signForm(*a);
	jim.increase();
	std::cout << jim;
	try
	{
		jim.executeForm(*a);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	Bureaucrat bob("Bob", 5);
	Form *b = new ShrubberyCreationForm("B");
	try
	{
		bob.executeForm(*b);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	Form *c = new RobotomyRequestForm("C");
	std::cout << *c;
	try
	{
		jim.signForm(*c);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		jim.executeForm(*c);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		bob.executeForm(*c);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		bob.signForm(*c);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		bob.executeForm(*c);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	Form *d = new PresidentialPardonForm("D");
	std::cout << *d;
	try
	{
		bob.signForm(*d);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		bob.executeForm(*d);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}



	delete a;
	delete b;
	delete c;
	delete d;
	return (0);
}