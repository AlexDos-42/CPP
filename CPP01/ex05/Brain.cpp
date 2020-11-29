#include "Brain.hpp"

Brain::Brain() : weight{1500}, IQ{120}
{}

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