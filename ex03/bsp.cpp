/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 12:38:34 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/11 14:45:16 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed abp = ((b.getX() - a.getX()) * (point.getY() - a.getY()))
		- ((b.getY() - a.getY()) * (point.getX() - a.getX()));
	Fixed bcp = ((c.getX() - b.getX()) * (point.getY() - b.getY()))
		- ((c.getY() - b.getY()) * (point.getX() - b.getX()));
	Fixed cap = ((a.getX() - c.getX()) * (point.getY() - c.getY()))
		- ((a.getY() - c.getY()) * (point.getX() - c.getX()));

	bool has_zero = abp == 0 || cap == 0 || bcp == 0;
	bool has_neg = abp < 0 || cap < 0 || bcp < 0;
	bool has_pos = abp > 0 || cap > 0 || bcp > 0;
	
	// on a line
	if (has_zero)
		return (false);
	//if same sign, its inside, this mean
	//has neg and has pos gotta be 1 and 0 to be true
	return (!(has_neg && has_pos));
}
