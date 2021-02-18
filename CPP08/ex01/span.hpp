#ifndef SPAN
# define SPAN

# include <iostream>
# include <exception>
# include <algorithm>
# include <vector>

class Span
{
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &copy);
		~Span();

		Span			&operator=(const Span &b);

		void			addNumber(int nb);
		void			addNumber(int low, int max);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();

		void		display() const;

		struct FullSpan: std::exception{
			virtual const char *what() const throw(){
				return ("Object is full");
			};
		};
		struct NoSpan: std::exception{
			virtual const char *what() const throw(){
				return ("No span to find");
			};
		};

	private:
		unsigned int		m_n;
		std::vector<int>	m_span;
};

#endif