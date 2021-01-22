#include "Brain.hpp"

Brain::Brain() : IQ{120}, weight{1500}
{
    (void)IQ;
    (void)weight;
}

Brain::~Brain()
{}

std::string Brain::identify()
{
    std::string add;
    std::ostringstream oss;
    
    oss << this;
    add = oss.str();
    return(add);
}