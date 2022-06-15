/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsozan <hsozan@student.42.tr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 15:32:45 by hsozan            #+#    #+#             */
/*   Updated: 2022/06/14 16:03:28 by hsozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int		ft_printf(const char *input, ...);
int		ft_sort(const char *input, va_list arg);
int		nbrcount(unsigned int n, int base);
int		ft_neghandle(long long int n, const char *input);
int		ft_nbrtoa_toprint(unsigned long long int n, int base,
			const char *s, int p);
char	*hex_check(const char *input);

#endif