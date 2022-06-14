/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsozan <hsozan@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:23:19 by hsozan            #+#    #+#             */
/*   Updated: 2022/02/26 22:19:18 by hsozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <ctype.h>
** SYNOPSIS: punctuation character test
**
** DESCRIPTION:
** 		The ispunct() function tests for any printing character, except for
**	space (` ') or a character for which isalnum(3) is true.
*/

int	ft_ispunct(int c)
{
	if ((c >= 33 && c <= 47) || (c >= 58 && c <= 64)
		|| (c >= 91 && c <= 96) || (c >= 123 && c <= 126))
		return (1);
	return (0);
}
