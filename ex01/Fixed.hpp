/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 13:36:45 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/06 18:52:20 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <iostream>

class Fixed
{
private:
	int					_value;
	static const int	_frac = 8;
public:
	Fixed( void );
	Fixed(const int nb);
	Fixed(const float nb);
	Fixed( const Fixed& aFixed);
	Fixed			&operator=(const Fixed& aFixed);
	~Fixed( void );
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
};
std::ostream	&operator<<(std::ostream& os, Fixed const &aFixed);
