#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
	Fixed();
	Fixed(int const n);
	Fixed(float const n);
	Fixed(Fixed const &ref);
	~Fixed();

	// Comparaisons
	bool				operator<(Fixed const &ref) const;
	bool				operator<=(Fixed const &ref) const;
	bool				operator>(Fixed const &ref) const;
	bool				operator>=(Fixed const &ref) const;
	bool				operator==(Fixed const &ref) const;
	bool				operator!=(Fixed const &ref) const;

	static Fixed const	&min(Fixed const &a, Fixed const &b);
	static Fixed const	&max(Fixed const &a, Fixed const &b);

	// Opérations
	Fixed				&operator=(Fixed const &ref);
	Fixed				operator+(Fixed const &ref) const;
	Fixed				operator-(Fixed const &ref) const;
	Fixed				operator*(Fixed const &ref) const;
	Fixed				operator/(Fixed const &ref) const;
	
	Fixed				operator++();		//++a
	Fixed				operator++(int);	//a++
	Fixed				operator--();		//--a
	Fixed				operator--(int);	//a--

	int					getRawBits(void) const;
	void				setRawBits(int const raw);
	int					toInt(void) const;
	float				toFloat(void) const;

	private:
	int					value;
	static const int	bits = 8;
};

std::ostream			&operator<<(std::ostream &ost, Fixed const &ref);
Fixed const				&min(Fixed const &a, Fixed const &b);
Fixed const				&max(Fixed const &a, Fixed const &b);

#endif