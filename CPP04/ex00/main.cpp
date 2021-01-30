#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Child.hpp"

int	main(void)
{
	Sorcerer	robert("Robert", "the Magnificent");

	Victim		jim("Jimmy");
	Peon		joe("Joe");
	Child		boby("Boby");

	std::cout << robert << jim << joe << boby << std::endl;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(boby);

	return (0);
}