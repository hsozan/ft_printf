/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsozan <hsozan@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 03:31:32 by hsozan            #+#    #+#             */
/*   Updated: 2022/01/16 08:19:29 by hsozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <math.h>
** SYNOPSIS: power function
**
** DESCRIPTION:
** 		The pow() function compute pow over n.
*/
#include "libft.h"

long double	ft_pow(long double n, long double pow)
{
	long double	result;

	if (pow == 0)
		return (1);
	if (pow < 0)
		return (0);
	result = n;
	while (pow-- > 1)
		result *= n;
	return (result);
}
/*#include<stdio.h>
int main()
{
	printf("%.0Lf",ft_pow(1.73205081,2));
}*/
