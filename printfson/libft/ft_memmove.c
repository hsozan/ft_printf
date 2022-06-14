/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsozan <hsozan@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 08:34:10 by hsozan            #+#    #+#             */
/*   Updated: 2022/02/10 13:30:29 by hsozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: copy byte string
**
** DESCRIPTION:
** 		The memmove() function copies n bytes from string s2 to string s1.  The
**	two strings may overlap; the copy is always done in a non-destructive
**	manner.
*/

#include "libft.h"
//#include<stdio.h>

/*void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmp;

	tmp = ft_calloc(len, sizeof (char));
	ft_memcpy(tmp, src, len);
	ft_memcpy(dst, tmp, len);
	return (dst);
}
/*int main()
{
  char a[] = "bu bir testtir";
  printf("%s",ft_memmove((a + 2) , a, 4));
}*/
