/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:31:27 by youbella          #+#    #+#             */
/*   Updated: 2023/09/06 10:44:01 by youbella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*p;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = (NULL);
		return (0);
	}
	p = malloc(4 * size);
	if (!p)
	{
		*range = (NULL);
		return (-1);
	}
	while (i < size)
		p[i++] = min++;
	*range = p;
	return (i);
}
