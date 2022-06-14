/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsozan <hsozan@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:15:13 by hsozan            #+#    #+#             */
/*   Updated: 2022/02/26 22:18:35 by hsozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
/*
** LIBRARY: <ctype.h>
** SYNOPSIS: alphanumeric character test
**
** DESCRIPTION:
** 		The isalnum() function tests for any character for which isalpha(3) or
**	isdigit(3) is true.
*/

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
