#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "main.hpp"

class Contact
{
    public:
    Contact();
    ~Contact();

    void new_info();
    void aff_info();
    std::string getName(int nb);

    private:
        std::string info[11];
};

#endif