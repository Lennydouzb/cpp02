/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 14:23:58 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/12 18:02:57 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Point.hpp"
#include <iostream>

int main( void )
{
	const Point A(0.0f, 0.0f);
	const Point B(1.0f, 0.0f);
	const Point C(0.5f, 1.0f);

	const Point P(0.2f, 0.3f);
	const Point Pp(0.2f, 1.1f);
	const Point Ppp(0.73137f, 0.77247f);
	const Point Pppp(0.76118f, 0.3423f);

	std::cout << "is in :" <<  bsp(A, B, C, P) <<  std::endl; 
	std::cout << "is in :" <<  bsp(A, B, C, Pppp) <<  std::endl; 

	std::cout << "is not in :" <<  bsp(A, B, C, Pp) <<  std::endl; 
	std::cout << "is not in :" <<  bsp(A, B, C, Ppp) <<  std::endl; 
}	
