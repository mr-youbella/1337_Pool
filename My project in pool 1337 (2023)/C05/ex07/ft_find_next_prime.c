/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:05:56 by youbella          #+#    #+#             */
/*   Updated: 2023/09/05 16:11:32 by youbella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while ((nb / i) >= i)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (prime(nb))
		return (nb);
	return (ft_find_next_prime(nb + 1));
}
