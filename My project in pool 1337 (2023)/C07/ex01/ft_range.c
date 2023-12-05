/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 04:01:47 by youbella          #+#    #+#             */
/*   Updated: 2023/09/06 04:08:15 by youbella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*p;

	if (min >= max)
		return (NULL);
	i = 0;
	size = max - min;
	p = malloc(4 * size);
	if (!p)
		return (NULL);
	while (i < size)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}
