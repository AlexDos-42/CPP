#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    public:
    Zombie();
    Zombie(std::string str, std::string str_type);
    ~Zombie();

    void advert();
    std::string baptem();
    std::string getName();
    void newZombie(std::string str, std::string str_type);

    private:
    std::string name;
    std::string type;
};


#endif
