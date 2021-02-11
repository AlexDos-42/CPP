#include <iostream>

class			Base { public : virtual ~Base() {} };

class			A : public Base {};
class			B : public Base {};
class			C : public Base {};

void			identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void			identify_from_reference(Base &p)
{
	identify_from_pointer(&p);
}

int				main()
{
	Base	*p1 = new A;
	Base	*p2 = new B;
	Base	*p3 = new C;

	std::cout << "\e[91mIndentify_from_pointer:\e[0m" << std::endl;
	std::cout << "p1: ";
	identify_from_pointer(p1);
	std::cout << "p2: ";
	identify_from_pointer(p2);
	std::cout << "p3: ";
	identify_from_pointer(p3);

	std::cout << std::endl << "\e[91mIndentify_from_reference:\e[0m" << std::endl;
	std::cout << "p1: ";
	identify_from_reference(*p1);
	std::cout << "p2: ";
	identify_from_reference(*p2);
	std::cout << "p3: ";
	identify_from_reference(*p3);

	delete p1;
	delete p2;
	delete p3;

	return 0;
}