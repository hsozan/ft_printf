/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsozan <hsozan@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 10:38:49 by hsozan            #+#    #+#             */
/*   Updated: 2022/02/28 22:47:45 by hsozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** SYNOPSIS: convert integer to ASCII string
**
** DESCRIPTION:
** 		Allocates (with malloc(3)) and returns a string representing the
**	integer received as an argument. Negative numbers must be handled.
*/

#include "libft.h"

static char	*writetos(char *str, int i, long nbr, int n)
{
	str[i--] = '\0';
	while (nbr > 0)
	{
		str[i--] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (n == 0 && str[1] == '\0')
		str[0] = '0';
	else if (n < 0)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	size_t	i;

	i = 0;
	nbr = n;
	if (nbr < 0)
	{
		i = 1;
		nbr = -nbr;
	}
	i += ft_intlen(n);
	str = (char *)malloc(i + 1);
	if (!str)
		return (NULL);
	return (writetos(str, i, nbr, n));
}
