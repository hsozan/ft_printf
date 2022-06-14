/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isgraph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsozan <hsozan@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:24:40 by hsozan            #+#    #+#             */
/*   Updated: 2022/02/26 22:19:12 by hsozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <ctype.h>
** SYNOPSIS: printing character test (space character exclusive)
**
** DESCRIPTION:
** 		 The isgraph() function tests for any printing character except space
**	(` ') and other locale-specific, space-like characters.
*/

int	ft_isgraph(int c)
{
	if (c >= 33 && c <= 126)
		return (1);
	return (0);
}
