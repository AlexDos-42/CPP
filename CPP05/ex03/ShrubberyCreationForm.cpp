#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("Shrubbery Creation", 145, 137), _target(NULL)
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target): Form("Shrubbery Creation", 145, 137), _target(target)
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
	std::ofstream file(_target + "_shrubbery", std::ios::trunc);
	if (file.is_open() && file.good())
	{
		file << "                 #                 " << std::endl;
		file << "                ###                " << std::endl;
		file << "          #....## ##....#          " << std::endl;
		file << "           #### ### ####           " << std::endl;
		file << "     #........# ### #........#     " << std::endl;
		file << "        ######### #########        " << std::endl;
		file << "     #.....#### ### ####.....#     " << std::endl;
		file << "      #######  ## ##  #######      " << std::endl;
		file << "         ## ##### ##### ##         " << std::endl;
		file << "#..........## ### ### ##..........#" << std::endl;
		file << "    ####### ## ##### ## #######    " << std::endl;
		file << "       #####  #######  #####       " << std::endl;
		file << "                000                " << std::endl;
		file << "                000                " << std::endl;
		file << "...............O000O..............." << std::endl;
		file.close();
	}
}