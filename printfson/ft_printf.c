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

char	*hex_check(const char *input)
{
	while (*input)
	{
		if (*input == 'x')
			return ("0123456789abcdef");
		else if (*input == 'X')
			return ("0123456789ABCDEF");
		input++;
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
	{
		res += ft_putstr("0x");
		base_c = "0123456789abcdef";
	}
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

int	ft_sort(const char *input, va_list arg)
{
	char	c;

	c = *input;
	if (c == 'd' || c == 'i')
		return (ft_neghandle(va_arg(arg, int), input));
	if (c == 'u')
		return (ft_nbrtoa_toprint(va_arg(arg, unsigned int), 10, input, 0));
	if (c == 'x' || c == 'X')
		return (ft_nbrtoa_toprint(va_arg(arg, unsigned int), 16, input, 0));
	if (c == 'p')
		return (ft_nbrtoa_toprint(va_arg(arg, unsigned long), 16, input, 1));
	if (c == 's')
		return (ft_putstr(va_arg(arg, char *)));
	if (c == 'c')
		return (ft_putchar(va_arg(arg, int)));
	if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *input, ...)

{
	va_list		args;
	int			res;

	res = 0;
	va_start(args, input);
	while (*input)
	{
		if (*input == '%')
		{
			input++;
			res += ft_sort(input, args);
		}
		else
		res += write(1, &*input, 1);
		input++;
	}
	va_end(args);
	return (res);
}
