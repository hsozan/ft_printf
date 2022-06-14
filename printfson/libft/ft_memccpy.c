/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsozan <hsozan@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 08:29:44 by hsozan            #+#    #+#             */
/*   Updated: 2022/01/16 08:30:23 by hsozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: copy string until character found
**
** DESCRIPTION:
** 		The memccpy() function copies bytes from string s2 to string s1.  If the
**	character c (as converted to an unsigned char) occurs in the string s2,
**	the copy stops and a pointer to the byte after the copy of c in the
**	string s1 is returned.  Otherwise, n bytes are copied, and a NULL pointer
**	is returned.
*/

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		if ((unsigned char)c == ((unsigned char *)src)[i])
			return (dst + i + 1);
		i++;
	}
	return (0);
}
