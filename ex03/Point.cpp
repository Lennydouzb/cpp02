/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 10:30:21 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/10 18:50:05 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Point.hpp"

Point::Point( void ) : x(0), y(0)
{
}

Point::Point(const Fixed xFixed, const Fixed yFixed) : x(xFixed), y(yFixed)
{
}

Point::Point(const Point &aPoint) : x(aPoint.x), y(aPoint.y)
{
}

Point	&Point::operator=(const Point &aPoint)
{
	if (this->x == aPoint.x)
		return (*this);
	//find this thing to force it, didnt test it btw
	//
	//const_cast<Fixed&>(this->x) = aPoint.x;
	//const_cast<Fixed&>(this->y) = aPoint.y;
	//as its const it just dont do anything, at least but it doesnt crash
	return (*this);
}

Point::~Point( void )
{
}

const Fixed Point::getX( void ) const
{
	return (this->x);
}

const Fixed Point::getY( void ) const
{
	return (this->y);
}
