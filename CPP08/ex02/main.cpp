#include "mutantstack.hpp"
#include <iostream>

int main()
{
	MutantStack<int> mstack;
	std::cout << "Let's add 2 numbers in the mutant stack: 5 and 17" << std::endl;
	mstack.push(5);
	mstack.push(17);

	std::cout << "Let's see if top() function works: ";
	std::cout << mstack.top() << std::endl;

	std::cout << "Let's use pop() and see what is the top() element after it: ";
	mstack.pop();
	std::cout << mstack.top() << std::endl;

	std::cout << "Let's see if the size() function works: ";
	std::cout << mstack.size() << std::endl;

	std::cout << std::endl;
	std::cout << "Let's add 4 numbers in the mutant stack: 3, 89, 737 and 0, and see the top(): ";
	mstack.push(3);
	mstack.push(89);
	mstack.push(737);
	mstack.push(0);
	mstack.push(42);
	std::cout << mstack.top() << std::endl;

	std::cout << "Let's define the first and the last iterator: " << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::cout << "The first iterator contains: " << *it << std::endl;

	std::cout << "Let's see if the incrementation works: " << std::endl;
	std::cout << "The incremented begin iterator (== the second element) contains: " << *(++it) << std::endl;
	std::cout << "The last element of the stack contains: " << *(--ite) << std::endl;

	std::cout << std::endl;
	std::cout << "The iterators are now reseted and we are going to track the whole mutant stack: ";
	it = mstack.begin();
	ite = mstack.end();
	while (it != ite)
	{
		std::cout << *it << ", ";
		++it;
	}
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "Let's test the reserve iterator: ";
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	std::cout << *rit << std::endl;

	std::cout << std::endl;
	std::cout << "Let's see if copying the mutant stack in a stack container works: ";
	std::stack<int> s(mstack);
	std::cout << s.top() << std::endl;
	std::cout << "Pop() is use on the new stack container: ";
	s.pop();
	std::cout << s.top() << std::endl;

	return 0;
}