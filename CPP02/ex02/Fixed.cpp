#include "Fixed.hpp"
#include <iostream>
# include <cmath>

Fixed::Fixed(): value(0)
{
}

Fixed::Fixed(int const n)
{
	this->value = n << this->bits;
}

Fixed::Fixed(float const n)
{
	this->value = roundf(n * (1 << this->bits));
}

Fixed::Fixed(Fixed const &ref)
{
	this->value = ref.getRawBits();
}

Fixed::~Fixed()
{
}

int		Fixed::getRawBits(void) const
{
	return this->value;
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

int		Fixed::toInt(void) const
{
	return this->value >> this->bits;
}

float	Fixed::toFloat(void) const
{
	return (float)this->value / (float)(1 << this->bits);
}


// Comparaisons //

bool	Fixed::operator==(Fixed const &ref) const
{
	return this->value == ref.getRawBits();
}

bool	Fixed::operator!=(Fixed const &ref) const
{
	return this->value != ref.getRawBits();
}

bool	Fixed::operator<=(Fixed const &ref) const
{
	return this->value <= ref.getRawBits();
}

bool	Fixed::operator>=(Fixed const &ref) const
{
	return this->value >= ref.getRawBits();
}

bool	Fixed::operator<(Fixed const &ref) const
{
	return this->value < ref.getRawBits();
}

bool	Fixed::operator>(Fixed const &ref) const
{
	return this->value > ref.getRawBits();
}

Fixed const	&min(Fixed const &a, Fixed const &b)
{
	return (a > b) ? b : a;
}

Fixed const	&Fixed::min(Fixed const &a, Fixed const &b)
{
	return (a > b) ? b : a;
}

Fixed const	&max(Fixed const &a, Fixed const &b)
{
	return (a > b) ? a : b;
}

Fixed const	&Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a > b) ? a : b;
}

// Opérations //

Fixed	&Fixed::operator=(Fixed const &ref)
{
	this->value = ref.getRawBits();
	return *this;
}

Fixed	Fixed::operator+(Fixed const &ref) const
{
	Fixed ret;

	ret.setRawBits(this->value + ref.getRawBits());
	return ret;
}

Fixed	Fixed::operator-(Fixed const &ref) const
{
	Fixed ret;

	ret.setRawBits(this->value - ref.getRawBits());
	return ret;
}

Fixed	Fixed::operator*(Fixed const &ref) const
{
	Fixed ret;

	ret.setRawBits(this->toFloat() * (float)ref.getRawBits());
	return ret;
}

Fixed	Fixed::operator/(Fixed const &ref) const
{
	Fixed ret;

	ret.setRawBits(roundf((1 << this->bits) * this->value / ref.value));
	return ret;
}

Fixed	Fixed::operator++()
{
	value = value + 1;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed ret(*this);

	++(*this);
	return ret;
}

Fixed	Fixed::operator--()
{
	value = value - 1;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed ret(*this);

	--(*this);
	return ret;
}

//

std::ostream		&operator<<(std::ostream &ost, Fixed const &ref)
{
	ost << ref.toFloat();
	return ost;
}