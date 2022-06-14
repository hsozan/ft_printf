/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsozan <hsozan@student.42.tr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 15:32:47 by hsozan            #+#    #+#             */
/*   Updated: 2022/06/14 15:58:10 by hsozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	nbrcount(unsigned int n, int base)
{
	int	count;

	count = 0;
	while (n)
	{
		n /= base;
		count++;
	}
	return (count);
}

int	ft_neghandle(long long int n, const char *input)
{
	int	res;

	res = 0;
	if (n < 0)
	{
		n = -n;
		res += ft_putchar('-');
	}
	res += ft_nbrtoa_toprint(n, 10, input, 0);
	return (res);
}

char	*hex_check(const char *input, int i)
{
	while (input[i])
	{
		if (input[i] == 'x')
			return ("0123456789abcdef");
		else if (input[i] == 'X')
			return ("0123456789ABCDEF");
		i++;
	}
	return ("0123456789");
}

int	ft_nbrtoa_toprint(unsigned long long int nbr,
		int base, const char *s, int p)

{
	char	*base_c;
	int		nbr_final[100];
	int		i;
	int		res;

	i = 0;
	res = 0;
	base_c = hex_check(s, i);
	if (p)
	{
		res += ft_putstr("0x");
		base_c = "0123456789abcdef";
	}
	while (nbr)
	{
		nbr_final[i] = nbr % base;
		nbr = nbr / base;
		i++;
	}
	while (--i >= 0)
		res += ft_putchar (base_c[nbr_final[i]]);
	return (res);
}
