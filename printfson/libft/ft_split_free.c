/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsozan <hsozan@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 08:45:06 by hsozan            #+#    #+#             */
/*   Updated: 2022/01/16 08:45:20 by hsozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** SYNOPSIS: free ft_split() return pointer
**
** DESCRIPTION:
** 		The ft_split_free() function frees the memory space pointed to by s,
**		which must have been returned by a previous call to malloc() by the
**		ft_split() function.
*/

#include "libft.h"

void	ft_split_free(char **s)
{
	size_t	i;

	if (!s || !*s)
		return ;
	i = 0;
	while (i < ft_strlen_2(s))
		free(s[i++]);
	free(s);
	*s = NULL;
}
