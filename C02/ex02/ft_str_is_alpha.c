/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 19:29:44 by youbella          #+#    #+#             */
/*   Updated: 2023/08/21 22:57:17 by youbella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] <= 122 && str[i] >= 97) || str[i] == 32
			|| (str[i] <= 90 && str[i] >= 65))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
