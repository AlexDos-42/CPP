#ifndef MUTANTSTACK
# define MUTANTSTACK

# include <algorithm>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() {}
		MutantStack(const MutantStack<T> & copy)
		{
			*this = copy;
		}
		MutantStack<T> & operator=(const MutantStack<T> &copy);
		~MutantStack() {}

		typedef typename std::deque<T >::iterator iterator;
		typename std::deque<T>::iterator begin() {
			return this->c.begin();
		}
		typename std::deque<T>::iterator end() {
			return this->c.end();
		}

		typedef typename std::deque<T>::const_iterator const_iterator;
		typename std::deque<T>::const_iterator begin() const{
			return this->c.begin();
		}
		typename std::deque<T>::const_iterator end() const{
			return this->c.end();
		}
};

#endif