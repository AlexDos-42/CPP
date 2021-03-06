#include "Form.hpp"

Form::Form(): m_name(0), m_status(false), m_signGrade(150), m_execGrade(150)
{}

Form::Form(std::string const &name, int const signGrade, int const execGrade): m_name(name), m_status(false), m_signGrade(signGrade), m_execGrade(execGrade)
{
	if (signGrade < 1 || execGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &copy): m_name(copy.m_name), m_status(copy.m_status), m_signGrade(copy.m_signGrade), m_execGrade(copy.m_execGrade)
{
	if (copy.m_signGrade < 1 || copy.m_execGrade < 1)
		throw Form::GradeTooHighException();
	else if (copy.m_signGrade > 150 || copy.m_execGrade > 150)
		throw Form::GradeTooLowException();
}

Form::~Form()
{}

Form			&Form::operator=(const Form &b)
{
	if (this != &b)
		m_status = b.m_status;
	return (*this);
}

std::string const	Form::getName() const
{
	return (m_name);
}

bool		Form::getStatus() const
{
	return (m_status);
}

int			Form::getGradeSign() const
{
	return (m_signGrade);
}

int			Form::getGradeExec() const
{
	return (m_execGrade);
}

void			Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= m_signGrade)
		m_status = true;
	else
		throw Form::GradeTooLowException();
}

void			Form::execute(Bureaucrat const &executor) const
{
	if (this->getStatus() == false)
		throw Form::FormUnsignedException();
	else if (executor.getGrade() > this->getGradeExec())
		throw Form::GradeTooLowException();
}

std::ostream		&operator<<(std::ostream &output, const Form &form)
{
	if (form.getStatus() == true)
		output << "Form " << form.getName() << " is signed. Grade required: " << form.getGradeSign()
		<< " to sign and " << form.getGradeExec()  << " to execute" << std::endl;
	else
		output << "Form " << form.getName() << " is unsigned. Grade required: " << form.getGradeSign()
		<<" to sign and " << form.getGradeExec() << " to execute" << std::endl;
	return (output);
}