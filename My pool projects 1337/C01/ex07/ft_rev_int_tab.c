/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 20:43:04 by youbella          #+#    #+#             */
/*   Updated: 2023/08/17 21:14:26 by youbella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	swp;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		swp = tab[start];
		tab[start] = tab[end];
		tab[end] = swp;
		start++;
		end--;
	}
}
