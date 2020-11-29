# include "main.hpp"

int main()
{
    std::string command;
    phonebook phonebook;

    while (1)
    {
        std::cout << "\e[93mEnter command (ADD, SEARCH, EXIT):\n   ➜ \e[0m";
        std::getline(std::cin, command);
        if (command == "EXIT")
        {
            std::cout << "\e[91mPhonebook is closing and you have lost your contacts forever\e[0m" << std::endl;
            break;
        }
        else if (command == "ADD")
            phonebook.add();
        else if (command == "SEARCH")
            phonebook.search();
    }
    return (0);
}