#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
    public:
    Weapon();
    Weapon(std::string str_type);
    ~Weapon();

    void setType(std::string newtype);
    std::string &getType();

    private:
    std::string type;
};


#endif
