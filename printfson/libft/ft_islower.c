/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsozan <hsozan@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:25:24 by hsozan            #+#    #+#             */
/*   Updated: 2022/02/26 22:19:14 by hsozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <ctype.h>
** SYNOPSIS: lower-case character test
**
** DESCRIPTION:
** 		 The islower() function tests for any lower-case letters.
*/

int	ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
