#ifndef PRESIDENTIALPARDONFORM
# define PRESIDENTIALPARDONFORM

# include "Form.hpp"

class PresidentialPardonForm: public Form
{
	public:
                PresidentialPardonForm();
                PresidentialPardonForm(std::string const &target);
                PresidentialPardonForm(const PresidentialPardonForm &copy);
                virtual ~PresidentialPardonForm();
                PresidentialPardonForm	&operator=(const PresidentialPardonForm&);
                virtual void	execute(Bureaucrat const &executor) const;

	private:
	    std::string const	m_target;
};

#endif