/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 14:23:58 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/10 18:47:55 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Point.hpp"
#include <iostream>

int main( void )
{
	const Point A(0, 0);
	const Point B(1, 0);
	const Point C(0.5f, 1);

	const Point P(0.2f, 0.3f);

	std::cout << bsp(A, B, C, P) <<  std::endl; 
}	
