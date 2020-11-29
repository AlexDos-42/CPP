#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include <iostream>
#include <string>
#include "Zombie.hpp"

class ZombieEvent
{
    public:
    ZombieEvent();
    ~ZombieEvent();

    void setZombieType(std::string str_type);
    Zombie *newZombie(std::string str);
    Zombie *randomChump();

    private:
    std::string type;
};

#endif
