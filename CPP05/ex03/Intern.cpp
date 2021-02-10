#include "Intern.hpp"

Intern::Intern()
{}

Intern::Intern(const Intern &copy)
{
	(void)copy;
}

Intern::~Intern()
{}

Intern	&Intern::operator=(const Intern &b)
{
	(void)b;
	return (*this);
}

Form	*fShrubbery(std::string const &target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*fRobotomy(std::string const &target)
{
	return (new RobotomyRequestForm(target));
}

Form	*fPardon(std::string const &target)
{
	return (new PresidentialPardonForm(target));
}

Form	*Intern::makeForm(std::string const &name, std::string const &target)
{
	Form *ret = NULL;
	m_create_form[0].m_name = "shrubbery creation";
	m_create_form[0].m_fct = &fShrubbery;
	m_create_form[1].m_name = "robotomy request";
	m_create_form[1].m_fct = &fRobotomy;
	m_create_form[2].m_name = "presidential pardon";
	m_create_form[2].m_fct = &fPardon;

	for (int i = 0; i < 3; i++)
	{
		if (name == m_create_form[i].m_name)
		{
			ret = m_create_form[i].m_fct(target);
			std::cout << "Intern creates " << ret->getName() << std::endl;
		}
	}
	if (!ret)
	{
		std::cout << "Can't create " << name << " form: ";
		throw Intern::UnknownForm();
	}
	return (ret);
}