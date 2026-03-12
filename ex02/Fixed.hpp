/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 13:36:45 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/10 13:40:47 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <iostream>

class Fixed
{
private:
	int					_value;
	static const int	_frac; 
public:
	Fixed( void );
	Fixed(const int nb);
	Fixed(const float nb);
	Fixed( const Fixed& aFixed);
	Fixed			&operator=(const Fixed& aFixed);
	bool			operator>(const Fixed& aFixed) const;
	bool			operator<(const Fixed& aFixed) const ;
	bool			operator>=(const Fixed& aFixed) const;
	bool			operator<=(const Fixed& aFixed) const;
	bool			operator==(const Fixed& aFixed) const;
	bool			operator!=(const Fixed& aFixed) const;
	Fixed			operator+(const Fixed& aFixed) const;
	Fixed			operator*(const Fixed& aFixed) const;
	Fixed			operator-(const Fixed& aFixed) const;
	Fixed			operator/(const Fixed& aFixed) const;
	Fixed			&operator++( void );
	Fixed			&operator--( void );
	Fixed			operator++( int );
	Fixed			operator--( int );
	~Fixed( void );
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
	static	Fixed &min(Fixed &firstFixed, Fixed &secondFixed);
	static	Fixed &max(Fixed &firstFixed, Fixed &secondFixed);
	static	const Fixed &min(const Fixed &firstFixed, const Fixed &secondFixed);
	static	const Fixed &max(const Fixed &firstFixed, const Fixed &secondFixed);
};
std::ostream	&operator<<(std::ostream& os, Fixed const &aFixed);
