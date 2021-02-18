#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <algorithm>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
public:
	MutantStack() {}
	MutantStack(const MutantStack<T> & src) { *this = src; }
	MutantStack<T> & operator=(const MutantStack<T> & rhs);
	~MutantStack() {}

	typedef typename std::deque<T, std::allocator<T> >::iterator iterator;
	typedef typename std::deque<T, std::allocator<T> >::const_iterator const_iterator;
	typedef typename std::deque<T, std::allocator<T> >::reverse_iterator reverse_iterator;
	typedef typename std::deque<T, std::allocator<T> >::const_reverse_iterator const_reverse_iterator;

	typename std::deque<T, std::allocator<T> >::iterator begin() { return this->c.begin(); }
	typename std::deque<T, std::allocator<T> >::iterator end() { return this->c.end(); }

	typename std::deque<T, std::allocator<T> >::reverse_iterator rbegin() { return this->c.rbegin(); }
	typename std::deque<T, std::allocator<T> >::reverse_iterator rend() { return this->c.rend(); }
};

#endif