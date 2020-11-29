#include "Human.hpp"

Human::Human()
{}

Human::~Human()
{}

Brain &Human::getBrain()
{
    return (ownBrain);
}

std::string Human::identify()
{
    return (ownBrain.identify());
}