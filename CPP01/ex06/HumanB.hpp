#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
    public:
    HumanB(std::string str);
    ~HumanB();

    void attack();
    void setWeapon(Weapon &str_Weapon);

    private:
    std::string name;
    Weapon      *ownWeapon;
};


#endif