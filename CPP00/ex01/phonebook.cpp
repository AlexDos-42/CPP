# include "main.hpp"

phonebook::phonebook()
{
	nb = 0;
}

phonebook::~phonebook(){}

void phonebook::add()
{
	if (nb > 7)
		std::cout << "\e[91mPhonebook is full you can't have more contacts.\e[0m" << std::endl;
	else
	{
		book[nb].new_info();
		nb = nb + 1;
	}
}

void phonebook::search()
{
	if (nb == 0)
	{
		std::cout << "\e[91mYou have 0 contact registred in this phonebook\e[0m" << std::endl;
		return ;
	}
	std::cout << "\e[93m" << "\n\t|     Index|First Name| Last Name|  Nickname|" << std::endl;
	for (int i = 0; i < nb; i++)
	{
		std::cout << "\e[93m\t|\e[92m"  << std::setw(10) << i + 1;
		for (int j = 0; j < 3; j++)
			if (book[i].getName(j).size() < 10)
				std::cout << "\e[93m|\e[92m" << std::setw(10) << book[i].getName(j);
			else
				std::cout << "\e[93m|\e[92m" << book[i].getName(j).substr(0, 9) << ".";
		std::cout << "\e[93m|\e[0m" << std::endl;
	}
	std::cout << std::endl;
	int index;
	Contact tmp;
	while (1)
	{
		std::cout << "\e[93m\tEnter an index to pick a contact (0 to exit):\n\t\t➜ \e[0m";
		std::cin >> index;
		if (std::cin.fail() || index > nb || index < 0)
		{
			std::cout << "\t\e[91mWrong index\e[0m" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else
		{
			if (index != 0)
				for (int i = 0; i < 10; i++)
						std::cout << "\e[92m\t" << tmp.getName(i) << " : " << book[index - 1].getName(i) << "\e[0m" << std::endl;
			else
			{
				std::cout << std::endl;
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				break;
			}
		}
	} 
	
}
