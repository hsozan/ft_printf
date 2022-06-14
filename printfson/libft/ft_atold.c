/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atold.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsozan <hsozan@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 10:21:58 by hsozan            #+#    #+#             */
/*   Updated: 2022/02/26 22:18:13 by hsozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

long double	ft_atold(const char *str)
{
	long double	res;
	long double	res2;
	char		*c;
	int			len;

	c = (char *)str;
	res = (long double)ft_atoi(c);
	while (*c && *c != '.')
		c++;
	if (*c == '.')
		c++;
	res2 = (long double)ft_atoi(c);
	len = ft_strlen(c);
	while (len--)
		res2 /= 10;
	if (res > 0)
		return (res + res2);
	else
		return (res - res2);
}
