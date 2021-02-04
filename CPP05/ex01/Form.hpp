#ifndef FORM
# define FORM

# include <iostream>
# include "Bureaucrat.hpp"

class		Bureaucrat;

class		Form
{
    private :
		std::string const		m_name;
		bool					m_status;
		int	const				m_signGrade;
		int	const				m_execGrade;

	public :
		Form();
		Form(std::string const &name, int signGrade, int execGrade);
		Form(Form const &copy);
		~Form();

        Form					&operator=(Form const&);
		std::string	const		getName() const;
		bool					getStatus() const;
		int						getGradeSign() const;
		int						getGradeExec() const;

		void					beSigned(Bureaucrat &bureaucrat);

		struct GradeTooHighException: std::exception
	    {
            virtual const char *what() const throw(){
                return ("Grade too High");
            };
        };
        struct GradeTooLowException: std::exception
        {
            virtual const char *what() const throw(){
                return ("Grade too Low");
            };
        };
};

std::ostream					&operator<<(std::ostream &os, Form const &f);

#endif