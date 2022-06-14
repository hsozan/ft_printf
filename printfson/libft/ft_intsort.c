/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsozan <hsozan@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:08:51 by hsozan            #+#    #+#             */
/*   Updated: 2022/02/26 22:26:18 by hsozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_intsort(int *table, int size)
{
	int		i;
	int		j;
	int		counter;

	i = 0;
	j = 1;
	while (i < (size - 1))
	{
		counter = 0;
		if (table[i] < table[j] || table[i] == table[j])
			j++;
		if (table[i] > table[j] && j != size)
		{
			ft_swap(&table[i], &table[j]);
			counter++;
			j++;
		}
		if (j == size)
		{
			if (counter == 0)
				i++;
			j = i + 1;
		}
	}
	return (table);
}
