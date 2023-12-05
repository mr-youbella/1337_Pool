/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:35:53 by youbella          #+#    #+#             */
/*   Updated: 2023/09/03 21:41:30 by youbella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	error(char *base)
{
	char	*temp;

	if (*base == '\0' || *(base + 1) == '\0')
		return (0);
	while (*base)
	{
		if (*base == '-' || *base == '+')
			return (0);
		temp = base + 1;
		while (*temp)
		{
			if (*temp == *base)
				return (0);
			temp++;
		}
		base++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		bl;
	long	n;
	char	r;

	i = 0;
	bl = 0;
	n = nbr;
	if (error(base) == 0)
		return ;
	while (base[bl])
		bl++;
	if (n < 0)
	{
		write(1, "-", 1);
		n = n * (-1);
	}
	if (n >= bl)
		ft_putnbr_base(n / bl, base);
	r = base[n % bl];
	write(1, &r, 1);
}
