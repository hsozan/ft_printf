/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsozan <hsozan@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:21:06 by hsozan            #+#    #+#             */
/*   Updated: 2022/02/26 22:19:20 by hsozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <ctype.h>
** SYNOPSIS: white-space character test
**
** DESCRIPTION:
** 		The isspace() function tests for the white-space characters.
*/

int	ft_isspace(int c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\v'
		|| c == '\f' || c == '\r')
		return (1);
	return (0);
}
