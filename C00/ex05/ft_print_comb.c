/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 18:11:59 by youbella          #+#    #+#             */
/*   Updated: 2023/08/17 09:32:49 by youbella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	f(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != 55)
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	x;

	i = 48;
	while (i <= 55)
	{
		j = i + 1;
		while (j <= 56)
		{
			x = j + 1;
			while (x <= 57)
			{
				f(i, j, x);
				x++;
			}
			j++;
		}
		i++;
	}
}
