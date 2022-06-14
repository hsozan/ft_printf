/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsozan <hsozan@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 08:52:20 by hsozan            #+#    #+#             */
/*   Updated: 2022/01/16 08:53:18 by hsozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** SYNOPSIS: find length of two dimensional array
**
** DESCRIPTION:
** 		The strlen_2() function computes the length of the two dimensional
**		array s.
*/

#include "libft.h"

size_t	ft_strlen_2(char **s)
{
	size_t	l;

	l = 0;
	while (s[l] != 0)
		l++;
	return (l);
}
