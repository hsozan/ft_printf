/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscntrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsozan <hsozan@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:17:58 by hsozan            #+#    #+#             */
/*   Updated: 2022/02/26 22:19:07 by hsozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <ctype.h>
** SYNOPSIS: control character test
**
** DESCRIPTION:
** 		The iscntrl() function tests for any control character.
*/

int	ft_iscntrl(int c)
{
	if ((c >= 0 && c <= 31) || c == 127)
		return (1);
	return (0);
}
