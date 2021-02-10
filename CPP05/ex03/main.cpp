#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

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

	std::cout << "\e[91m############## ex02 ##############=\e[0m" << std::endl;

	Bureaucrat jim("Jim", 138);

	Form *File = new ShrubberyCreationForm("File");

	std::cout << jim;
	std::cout << *File;
	
	try
	{
		jim.signForm(*File);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		jim.executeForm(*File);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	jim.increase();
	jim.signForm(*File);
	std::cout << jim;
	std::cout << *File;
	try
	{
		jim.executeForm(*File);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	Bureaucrat bob("Bob", 5);
	Form *File2 = new ShrubberyCreationForm("File2");
	try
	{
		bob.executeForm(*File2);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}

	Form *File3 = new RobotomyRequestForm("File3");
	std::cout << *File3;
	try
	{
		jim.signForm(*File3);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		jim.executeForm(*File3);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		bob.executeForm(*File3);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		bob.signForm(*File3);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		bob.executeForm(*File3);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	Form *File4 = new PresidentialPardonForm("File4");
	std::cout << std::endl << *File4;
	try
	{
		bob.signForm(*File4);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		bob.executeForm(*File4);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}



	delete File;
	delete File2;
	delete File3;
	delete File4;


	std::cout << std::endl << "\e[91m############## ex03 ##############=\e[0m" << std::endl;
	Intern	someRandomIntern;
	Form	*scf, *rrf, *ppf, *test;
	Bureaucrat johnny("Johnny", 1);

	try
	{
		scf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		std::cout << *scf ;
		johnny.signForm(*scf);
		std::cout << *scf;
		johnny.executeForm(*scf);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout <<  std::endl;
	try
	{
		test = someRandomIntern.makeForm("Test", "Bender");
		std::cout << *test;
		johnny.signForm(*test);
		std::cout << *test;
		johnny.executeForm(*test);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout <<  std::endl;

	try
	{
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << *rrf;
		johnny.signForm(*rrf);
		johnny.executeForm(*rrf);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout <<  std::endl;

	try
	{
		ppf = someRandomIntern.makeForm("presidential pardon", "Bender");
		std::cout << *ppf;
		johnny.signForm(*ppf);
		johnny.executeForm(*ppf);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	delete scf;
	delete rrf;
	delete ppf;


	return (0);
}