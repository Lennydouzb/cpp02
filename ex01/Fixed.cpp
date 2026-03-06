/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 14:00:04 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/06 19:00:57 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"
#include <cmath>
#include <ostream>

Fixed::Fixed( void ) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor is called" << std::endl;
	this->setRawBits( nb << _frac );
}

Fixed::Fixed(const float nb)
{
	std::cout << "Float constructor is called" << std::endl;
	this->setRawBits(roundf(nb * (1 << _frac)));
}

Fixed::Fixed( const Fixed& aFixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_value = aFixed.getRawBits();
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed& aFixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = aFixed.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &os, Fixed const &aFixed)
{
	os << aFixed.toFloat();
	return os;
}
int	Fixed::getRawBits( void ) const
{
	return (this->_value);
}

void	Fixed::setRawBits( int const raw )
{
	this->_value = raw;
}

float Fixed::toFloat( void ) const
{
	float nb;

	nb = ((float)this->getRawBits() / (float)(1 << _frac));
	return (nb);
}

int Fixed::toInt( void ) const
{
	int nb;

	nb = (this->getRawBits() >> _frac);
	return (nb);
}
