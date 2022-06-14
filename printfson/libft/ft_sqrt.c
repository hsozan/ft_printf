/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsozan <hsozan@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 08:11:24 by hsozan            #+#    #+#             */
/*   Updated: 2022/01/16 08:11:39 by hsozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <math.h>
** SYNOPSIS: square root function
**
** DESCRIPTION:
** 		The sqrt() function compute the non-negative square root of x.
*/
#include "libft.h"

long double	ft_sqrt(long double x)
{
	long double	temp;
	long double	sqrt;

	sqrt = x / 2;
	temp = 0;
	while (sqrt != temp)
	{
		temp = sqrt;
		sqrt = (x / temp + temp) / 2;
	}
	return (sqrt);
}
/*#include<stdio.h>
int main()
{
	printf("%.8Lf",ft_sqrt(3));
}*/
