#include "Fixed.hpp"
#include <iostream>
# include <cmath>

Fixed::Fixed(): value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = n << this->bits;
}

Fixed::Fixed(float const n)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(n * (1 << this->bits));
}

Fixed::Fixed(Fixed const &ref)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = ref.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &ref)
{
	std::cout << "Assignation operator called" << std::endl;
	this->value = ref.getRawBits();
	return *this;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
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

std::ostream		&operator<<(std::ostream &ost, Fixed const &ref)
{
	ost << ref.toFloat();
	return ost;
}