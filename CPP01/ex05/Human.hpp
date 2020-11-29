#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human
{
    public:
    Human();
    ~Human();

    Brain &getBrain();
    std::string identify();

    private:
    Brain ownBrain;
};

#endif
