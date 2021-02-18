#ifndef BUREAUCRAT
# define BUREAUCRAT

# include <iostream>
# include <exception>

class Bureaucrat
{
	private:
		std::string const	m_name;
		int					m_grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string const &name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		~Bureaucrat();

		Bureaucrat			&operator=(const Bureaucrat&);
		std::string const	getName() const;
		int					getGrade() const;

		void				increase();
		void				decrease();

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

std::ostream	&operator<<(std::ostream &output, const Bureaucrat &bureaucrat);

#endif
