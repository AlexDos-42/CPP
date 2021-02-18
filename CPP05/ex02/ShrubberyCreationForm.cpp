#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("Shrubbery Creation", 145, 137), m_target(NULL)
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target): Form("Shrubbery Creation", 145, 137), m_target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy): Form(copy.getName(), copy.getGradeSign(), copy.getGradeExec())
{
	*this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	if (this != &copy)
		Form::operator=(copy);
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::ofstream file(m_target + "_shrubbery", std::ios::trunc);
	if (file.is_open() && file.good())
	{
		file << "                         vv" << std::endl;
		file << "                     vvv^^^^vvvvv" << std::endl;
		file << "                 vvvvvvvvv^^vvvvvv^^vvvvv" << std::endl;
		file << "        vvvvvvvvvvv^^^^^^^^^^^^^vvvvv^^^vvvvv" << std::endl;
		file << "    vvvvvvv^^^^^^^^^vvv^^^^^^^vvvvvvvvvvv^^^vvv" << std::endl;
		file << "  vvvv^^^^^^vvvvv^^^^^^^vv^^^^^^^vvvv^^^vvvvvv" << std::endl;
		file << " vv^^^^^^^^vvv^^^^^vv^^^^vvvvvvvvvvvv^^^^^^vv^" << std::endl;
		file << " vvv^^^^^vvvv^^^^^^vvvvv^^vvvvvvvvv^^^^^^vvvvv^" << std::endl;
		file << "  vvvvvvvvvv^^^v^^^vvvvvv^^vvvvvvvvvv^^^vvvvvvvvv" << std::endl;
		file << "   ^vv^^^vvvvvvv^^vvvvv^^^^^^^^vvvvvvvvv^^^^^^vvvvvv" << std::endl;
		file << "     ^vvvvvvvvv^^^^vvvvvv^^^^^^vvvvvvvv^^^vvvvvvvvvv^v" << std::endl;
		file << "        ^^^^^^vvvv^^vvvvv^vvvv^^^v^^^^^^vvvvvv^^^^vvvvv" << std::endl;
		file << " vvvv^^vvv^^^vvvvvvvvvv^vvvvv^vvvvvv^^^vvvvvvv^^vvvvv^" << std::endl;
		file << "vvv^vvvvv^^vvvvvvv^^vvvvvvv^^vvvvv^v##vvv^vvvv^^vvvvv^v" << std::endl;
		file << " ^vvvvvv^^vvvvvvvv^vv^vvv^^^^^^_____##^^^vvvvvvvv^^^^" << std::endl;
		file << "    ^^vvvvvvv^^vvvvvvvvvv^^^^/\\@@@@@@\\#vvvv^^^" << std::endl;
		file << "         ^^vvvvvv^^^^^^vvvvv/__\\@@@@@@\\^vvvv^v" << std::endl;
		file << "             ;^^vvvvvvvvvvv/____\\@@@@@@\vvvvvvv" << std::endl;
		file << "             ;      \\_  ^\\|[  -:] ||--| | _/^^" << std::endl;
		file << "             ;        \\   |[   :] ||_/| |/" << std::endl;
		file << "             ;         \\ ||___:]______/" << std::endl;
		file << "             ;          \\   ;=; /" << std::endl;
		file << "             ;           |  ;=;|" << std::endl;
		file << "             ;          ()  ;=;|" << std::endl;
		file << "            (()          || ;=;|" << std::endl;
		file << "                        / / \\;=;\\" << std::endl;
		file.close();
	}
}