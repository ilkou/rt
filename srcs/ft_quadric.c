/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quadric.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouklich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 22:57:52 by oouklich          #+#    #+#             */
/*   Updated: 2019/11/01 22:57:57 by oouklich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

int		ft_solve_quadric(double c[3], double s[2])
{
	double	p;
	double	q;
	double	d;

	p = c[1] / (2.0 * c[2]);
	q = c[0] / c[2];
	d = p * p - q;
	if (IS_ZERO(d))
	{
		s[0] = -p;
		return (1);
	}
	else if (d < 0)
		return (0);
	else
	{
		d = sqrt(d);
		s[0] = d - p;
		s[1] = -d - p;
		return (2);
	}
}
