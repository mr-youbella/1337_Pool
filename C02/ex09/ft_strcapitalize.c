/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 22:05:48 by youbella          #+#    #+#             */
/*   Updated: 2023/08/21 00:18:28 by youbella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	x;

	ft_lowercase(str);
	i = 0;
	x = 1;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (x == 1)
			{
				str[i] -= 32;
				x = 0;
			}
		}
		else if (str[i] >= 48 && str[i] <= 57)
			x = 0;
		else
			x = 1;
		i++;
	}
	return (str);
}
