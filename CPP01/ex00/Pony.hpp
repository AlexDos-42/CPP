#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>
#include <limits>
#include <unistd.h>

class Pony
{
	public:
		Pony();
		~Pony();
		
		void New_name();
		void gallop();
		void eat();

	private:
		std::string name;
};

#endif