#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("Robotomy Request", 72, 45), m_target(NULL)
{}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target): Form("Robotomy Request", 72, 45), m_target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy): Form(copy.getName(), copy.getGradeSign(), copy.getGradeExec())
{
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	if (this != &copy)
		Form::operator=(copy);
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	srand(time(NULL));
	Form::execute(executor);
	std::cout << "TARATARATATAC ... *" << std::endl;
	if (rand() % 3 == 2) 
		std::cout << m_target << " has been robotomized." << std::endl;
	else
		std::cout << "Robotomization on " << m_target << " failed." << std::endl;
}