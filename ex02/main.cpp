/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 14:23:58 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/09 15:23:02 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"
#include <iostream>
int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;




	std::cout << "=== bools ===" << std::endl;
	Fixed const c(10.5f);
	Fixed const d(2.0f);
	Fixed e(10.5f);
	Fixed f(5.0f);
	std::cout << "c (10.5) > d (2.0)  : " << (c > d) << std::endl;
	std::cout << "c (10.5) < d (2.0)  : " << (c < d) << std::endl;
	std::cout << "c (10.5) >= e (10.5): " << (c >= e) << std::endl;
	std::cout << "c (10.5) <= d (2.0) : " << (c <= d) << std::endl;
	std::cout << "c (10.5) == e (10.5): " << (c == e) << std::endl;
	std::cout << "c (10.5) != d (2.0) : " << (c != d) << std::endl;

	std::cout << "=== maths ===" << std::endl;
	std::cout << "c (10.5) + d ((5.0)  : " << (e + f) << std::endl;
	std::cout << "c (10.5) - d (5.0)  : " << (e - f) << std::endl;
	std::cout << "c (10.5) * d (5.0)  : " << (e * f) << std::endl;
	std::cout << "c (10.5) / d (5.0)  : " << (e / f) << std::endl;

	std::cout << "n=== ++/-- ===" << std::endl;
	std::cout << "f initial           : " << f << std::endl;
	std::cout << "Pre-decrement (--f) : " << --f << std::endl;
	std::cout << "f after pre-dec     : " << f << std::endl;
	std::cout << "Post-decrement (f--): " << f-- << std::endl;
	std::cout << "f after post-dec    : " << f << std::endl;

	std::cout << "=== min max ===" << std::endl;
		Fixed g(4.2f);
	Fixed h(8.4f);
	Fixed const constG(4.2f);
	Fixed const constH(8.4f);

	std::cout << "Max (non-const) 4.2 vs 8.4 : " << Fixed::max(g, h) << std::endl;
	std::cout << "Min (non-const) 4.2 vs 8.4 : " << Fixed::min(g, h) << std::endl;

	std::cout << "Max (const) 4.2 vs 8.4     : " << Fixed::max(constG, constH) << std::endl;
	std::cout << "Min (const) 4.2 vs 8.4     : " << Fixed::min(constG, constH) << std::endl;

	return 0;
}
