/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsozan <hsozan@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 10:42:13 by hsozan            #+#    #+#             */
/*   Updated: 2022/01/16 10:42:36 by hsozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <ctype.h>
** SYNOPSIS: upper case to lower case letter conversion
**
** DESCRIPTION:
** 		The tolower() function converts an upper-case letter to the
**	corresponding lower-case letter.
*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}
