#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "main.hpp"

class phonebook
{
    public:
    phonebook();
    ~phonebook();

    void add();
    void search();

    private:
    Contact book[8];
    int nb;
};

#endif