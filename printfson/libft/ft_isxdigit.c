/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsozan <hsozan@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:19:19 by hsozan            #+#    #+#             */
/*   Updated: 2022/01/15 17:20:04 by hsozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <ctype.h>
** SYNOPSIS: hexadecimal-digit character test
**
** DESCRIPTION:
** 		The isxdigit() function tests for any hexadecimal-digit character.
*/

int	ft_isxdigit(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'F')
		|| (c >= 'a' && c <= 'f'))
		return (1);
	return (0);
}
