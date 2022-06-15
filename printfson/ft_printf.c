/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsozan <hsozan@student.42.tr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 15:32:42 by hsozan            #+#    #+#             */
/*   Updated: 2022/06/14 15:49:57 by hsozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_neghandle(long long int n, const char *s)
{
	int	res;

	res = 0;
	if (n < 0)
	{
		n = -n;
		res += ft_putchar('-');
	}
	res += ft_nbrtoa_toprint(n, 10, s, 0);
	return (res);
}

char	*hex_check(const char *s)
{
	while (*s)
	{
		if (*s == 'x' || *s == 'p')
			return ("0123456789abcdef");
		else if (*s == 'X')
			return ("0123456789ABCDEF");
		s++;
	}
	return ("0123456789");
}

int	ft_nbrtoa_toprint(unsigned long long int nbr,
		int base, const char *s, int p)

{
	char	*base_c;
	int		nbr_backwards[100];
	int		i;
	int		res;

	i = 0;
	res = 0;
	base_c = hex_check(s);
	if (p)
		res += ft_putstr("0x");
	if (nbr == 0)
		res += ft_putstr("0");
	while (nbr)
	{
		nbr_backwards[i] = nbr % base;
		nbr = nbr / base;
		i++;
	}
	while (--i >= 0)
		res += ft_putchar (base_c[nbr_backwards[i]]);
	return (res);
}

int	ft_sort(const char *s, va_list arg)
{
	if (*s == 'd' || *s == 'i')
		return (ft_neghandle(va_arg(arg, int), s));
	if (*s == 'u')
		return (ft_nbrtoa_toprint(va_arg(arg, unsigned int), 10, s, 0));
	if (*s == 'x' || *s == 'X')
		return (ft_nbrtoa_toprint(va_arg(arg, unsigned int), 16, s, 0));
	if (*s == 'p')
		return (ft_nbrtoa_toprint(va_arg(arg, unsigned long), 16, s, 1));
	if (*s == 's')
		return (ft_putstr(va_arg(arg, char *)));
	if (*s == 'c')
		return (ft_putchar(va_arg(arg, int)));
	if (*s == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *s, ...)

{
	va_list		args;
	int			res;

	res = 0;
	va_start(args, s);
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			res += ft_sort(s, args);
		}
		else
		res += write(1, &*s, 1);
		s++;
	}
	va_end(args);
	return (res);
}
