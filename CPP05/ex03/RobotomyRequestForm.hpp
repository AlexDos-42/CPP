#ifndef ROBOTOMYREQUESTFORM
# define ROBOTOMYREQUESTFORM

# include "Form.hpp"

class RobotomyRequestForm: public Form
{
	public:
                RobotomyRequestForm();
                RobotomyRequestForm(std::string const &target);
                RobotomyRequestForm(const RobotomyRequestForm &copy);
                virtual ~RobotomyRequestForm();
                RobotomyRequestForm	&operator=(const RobotomyRequestForm&);
                virtual void	execute(Bureaucrat const &executor) const;

	private:
	    std::string const	m_target;
};

#endif