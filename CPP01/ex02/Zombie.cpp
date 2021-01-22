#include "Zombie.hpp"
#include <cstdlib>

Zombie::Zombie(): name(std::string()), type(std::string())
{}

Zombie::Zombie(std::string str, std::string str_type)
{
    name = str;
    type = str_type;
}

Zombie::~Zombie()
{
    std::cout << "<" << name << " (" << type <<")> terminated" << std::endl; 
}

void Zombie::advert()
{
    std::cout << "<" << name << " (" << type <<")> Braiiiiinnnssss ..." << std::endl; 
}

std::string Zombie::baptem()
{
    std::string abc("abcdefghijklmnopqrstuvwxyz");
    std::string aaa("aeiouy");
    std::string newname;

    for (int i = 0; i < 10; i++)
    {
        if (i == 4)
            newname += " ";
        else if (i % 2)
            newname += abc[26.0 * rand() / (RAND_MAX)];
        else
            newname += aaa[6.0 * rand() / (RAND_MAX)];
    }
    newname[0] = std::toupper(newname[0]);
    return(newname);
}

void Zombie::newZombie(std::string str, std::string str_type)
{
    name = str;
    type = str_type;
    Zombie::advert();

}

std::string Zombie::getName()
{
    return(name);
}
