#include "span.hpp"

Span::Span(): m_n(0)
{}

Span::Span(unsigned int N): m_n(N)
{}

Span::Span(const Span &copy): m_n(copy.m_n), m_span(copy.m_span)
{}

Span::~Span()
{}

Span		&Span::operator=(const Span &b)
{
	if (this != &b)
	{
		m_n = b.m_n;
		m_span = b.m_span;
	}
	return (*this);
}

void		Span::addNumber(int nb)
{
	if (m_span.size() < m_n)
		m_span.push_back(nb);
	else
		throw Span::FullSpan();
}

unsigned int	Span::shortestSpan()
{
	if (_span.size() <= 1)
		throw Span::NoSpan();
	std::vector<int> tmp = _span;
	unsigned int sp;

	std::sort(tmp.begin(), tmp.end());
	sp = tmp[1] - tmp[0];
	for (size_t i = 1; i < tmp.size() - 1; i++)
	{
		if (sp > static_cast<unsigned int>(tmp[i + 1] - tmp[i]))
			sp = tmp[i + 1] - tmp[i];
	}
	return (sp);
}

unsigned int	Span::longestSpan()
{
	if (_span.size() <= 1)
		throw Span::NoSpan();
	std::vector<int> tmp = _span;
	std::sort(tmp.begin(), tmp.end());
	return (tmp.back() - tmp.front());
}

void		Span::display() const
{
	for (std::vector<int>::const_iterator it = m_span.begin(); it != _span.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}