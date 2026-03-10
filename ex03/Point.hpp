/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 10:23:09 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/10 18:51:04 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Fixed.hpp"

class Point
{
private:
	const	Fixed	x;
	const	Fixed	y;
public:
	Point( void );
	Point(const Fixed xFixed, const Fixed yFixed);
	Point(const Point &aPointCopy);
	Point	&operator=(const Point &aPoint);
	~Point( void );
	const Fixed getX( void ) const;
	const Fixed getY( void ) const;
};
bool	bsp( Point const a, Point const b, Point const c, Point const point);
