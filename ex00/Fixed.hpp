/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 13:36:45 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/06 14:22:52 by ldesboui         ###   ########.fr       */
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
	Fixed( const Fixed& aFixed);
	Fixed &operator=(const Fixed& aFixed);
	~Fixed( void );
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};
