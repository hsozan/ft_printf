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
