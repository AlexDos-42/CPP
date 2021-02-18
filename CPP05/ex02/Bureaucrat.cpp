#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade): m_name(name), m_grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy): m_name(copy.m_name), m_grade(copy.m_grade)
{}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &copy)
{
	this->m_grade = copy.m_grade;
	return (*this);
}

void		Bureaucrat::increase()
{
	if (m_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		m_grade--;
}

void		Bureaucrat::decrease()
{
	if (m_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		m_grade++;
}

void		Bureaucrat::signForm(Form &form)
{
	if (form.getStatus() == true)
		std::cout << m_name << " can't sign " << form.getName() << " because is already signed" << std::endl;
	else if (m_grade > form.getGradeSign())
		std::cout << m_name << " can't sign " << form.getName() << " because: ";
	else
		std::cout << m_name << " signs " << form.getName() << std::endl;
	form.beSigned(*this);
}

void		Bureaucrat::executeForm(Form const &form)
{
	if (form.getStatus() == false)
		std::cout << m_name << " can't execute " << form.getName() << " because : ";
	else if (m_grade > form.getGradeExec())
		std::cout << m_name << " can't execute " << form.getName() << " because : ";
	else
		std::cout << m_name << " executes " << form.getName() << std::endl;
	form.execute(*this);
}

std::string const	Bureaucrat::getName() const
{
	return (m_name);
}

int			Bureaucrat::getGrade() const
{
	return (m_grade);
}

std::ostream		&operator<<(std::ostream &output, const Bureaucrat &bureaucrat)
{
	output << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "." << std::endl;
	return (output);
}