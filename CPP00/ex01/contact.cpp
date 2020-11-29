# include "main.hpp"

Contact::Contact()
{
    info[0] = std::string("First Name");
    info[1] = std::string("Last Name");
    info[2] = std::string("Nickname");
    info[3] = std::string("Login");
    info[4] = std::string("Postal address");
    info[5] = std::string("Email adress");
    info[6] = std::string("Phone number");
    info[7] = std::string("Birthday date");
    info[8] = std::string("Favorite meal");
    info[9] = std::string("Underwear color");
    info[10] = std::string("Darkest secret");
}

Contact::~Contact()
{}

void Contact::new_info()
{
    std::string tmp;

    tmp.clear();
    std::cout << "\e[93mNew contact, add informations:\e[0m" << std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout << "\e[93m" << info[i] <<": \e[0m";
        while (tmp.size() == 0)
        {
            std::getline(std::cin, tmp);
            if (tmp.size() == 0)
                std::cout << "\e[91mYou have to fill each information\n\e[93m" << info[i] << ": \e[0m";
        }
        info[i] = tmp;
        tmp.clear();
    }
}

std::string Contact::getName(int nb)
{
    return(info[nb]);
}
