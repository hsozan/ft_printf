/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsozan <hsozan@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 08:49:33 by hsozan            #+#    #+#             */
/*   Updated: 2022/01/16 08:50:43 by hsozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** SYNOPSIS: concatenate two strings into a new string (with malloc)
**
** DESCRIPTION:
** 		Allocates (with malloc(3)) and returns a new string, which is the
**	result of the concatenation of ’s1’ and ’s2’.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		i;
	int		j;

	new_str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s1 || !s2 || !new_str)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		new_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
		new_str[i++] = s2[j++];
	new_str[i] = '\0';
	return (new_str);
}
