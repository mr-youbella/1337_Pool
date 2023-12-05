/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 02:49:54 by youbella          #+#    #+#             */
/*   Updated: 2023/08/28 04:38:44 by youbella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	nonprint(char c)
{
	char	*hd;

	hd = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &hd[c / 16], 1);
	write(1, &hd[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str <= 126 && *str >= 32)
			write(1, str, 1);
		else
			nonprint(*str);
		str++;
	}
}
