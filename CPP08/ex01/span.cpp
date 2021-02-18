#include "span.hpp"

Span::Span(): m_n(0)
{}

Span::Span(unsigned int n): m_n(n)
{}

Span::Span(const Span &copy)
{
	*this = copy;
}

Span::~Span()
{}

Span		&Span::operator=(const Span &copy)
{
	if (this != &copy)
	{
		m_n = copy.m_n;
		m_span = copy.m_span;
	}
	return (*this);
}

void		Span::addNumber(int n)
{
	if (m_span.size() < m_n)
		m_span.push_back(n);
	else
		throw Span::FullSpan();
}

void		Span::addNumber(int low, int max) {
	if (max > low)
	{
		if ((this->m_n - this->m_span.size()) < static_cast<unsigned long>(max - low))
			throw Span::FullSpan();
		else
			for (int i = low; i <= max; i++)
				this->m_span.push_back(i);
	}
}

unsigned int	Span::shortestSpan()
{
	if (m_span.size() <= 1)
		throw Span::NoSpan();
	std::sort(m_span.begin(), m_span.end());
	int shortSpan = m_span[1] - m_span[0];
	for (size_t i = 1; i < m_span.size() - 1; i++)
	{
		if (shortSpan > m_span[i + 1] - m_span[i])
			shortSpan = m_span[i + 1] - m_span[i];
	}
	return (shortSpan);
}

unsigned int	Span::longestSpan()
{
	if (m_span.size() <= 1)
		throw Span::NoSpan();
	std::sort(m_span.begin(), m_span.end());
	return (m_span.back() - m_span.front());
}

void		Span::display() const
{
	std::cout << "Span display: ";
	for (std::vector<int>::const_iterator it = m_span.begin(); it != m_span.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}