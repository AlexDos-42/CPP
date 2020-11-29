#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
    type = std::string();
}

ZombieEvent::~ZombieEvent()
{}

void ZombieEvent::setZombieType(std::string str_type)
{
    type = str_type;
}

Zombie *ZombieEvent::newZombie(std::string str)
{
    Zombie *zombie;

    zombie = new Zombie(str, type);
    zombie->advert();
    return (zombie);
}

Zombie *ZombieEvent::randomChump()
{
    Zombie *zombie;
    std::string newname;

    zombie = new Zombie(zombie->baptem(), type);
    zombie->advert();
    return (zombie);
}
