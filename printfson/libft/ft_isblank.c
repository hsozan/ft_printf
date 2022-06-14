/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsozan <hsozan@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:20:30 by hsozan            #+#    #+#             */
/*   Updated: 2022/02/26 22:19:01 by hsozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <ctype.h>
** SYNOPSIS: space or tab character test
**
** DESCRIPTION:
** 		The isblank() function tests for a space or tab character.
*/

int	ft_isblank(int c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}
