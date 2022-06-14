/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsozan <hsozan@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 08:39:01 by hsozan            #+#    #+#             */
/*   Updated: 2022/01/16 08:39:23 by hsozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** SYNOPSIS: output string to stdout with newline
**
** DESCRIPTION:
** 		Outputs the string ’s’ to stdout, followed by a newline.
*/

#include "libft.h"

void	ft_putendl(char *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}
