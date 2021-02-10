#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("Presidential Pardon", 25, 5), m_target(NULL)
{}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target): Form("Presidential Pardon", 25, 5), m_target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy): Form(copy.getName(), copy.getGradeSign(), copy.getGradeExec())
{
	*this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
	if (this != &copy)
		Form::operator=(copy);
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << m_target << " has been forgiven by Zafod Beeblebrox." << std::endl;
}