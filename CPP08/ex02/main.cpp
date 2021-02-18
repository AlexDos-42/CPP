# include "mutantstack.hpp"
# include <iostream>
# include <list>

int main()
{
	std::cout << "\e[94m### Subject Test ###\e[0m" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Number on top of the stack:\t";
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size after remove the top:\t";
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::cout << "The first element of the stack:\t" << *it << std::endl;
	std::cout << "The last element of the stack:\t" << *(--ite) << std::endl;
	ite++;
	std::cout << "Display what is on the stack:\t" ;
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl << std::endl;
	std::stack<int> s(mstack);

	std::cout << "\e[94m### List Test ###\e[0m" << std::endl;
	std::list<int> mlist;
	mlist.push_back(5);
	mlist.push_back(17);
	std::cout << "Number on top of the stack:\t";
	std::cout << mlist.back() << std::endl;
	mlist.pop_back();
	std::cout << "Size after remove the top:\t";
	std::cout << mlist.size() << std::endl;
	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	mlist.push_back(0);
	std::list<int>::iterator it1 = mlist.begin();
	std::list<int>::iterator ite1 = mlist.end();
	std::cout << "The first element of the stack:\t" << *it1 << std::endl;
	std::cout << "The last element of the stack:\t" << *(--ite1) << std::endl;
	ite1++;
	std::cout << "Display what is on the stack:\t" ;
	while (it1 != ite1)
	{
		std::cout << *it1 << " ";
		++it1;
	}
	std::cout << std::endl << std::endl;
}