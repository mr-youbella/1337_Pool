/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 09:38:59 by youbella          #+#    #+#             */
/*   Updated: 2023/08/28 02:05:55 by youbella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*p;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			p = &str[i];
			while (str[i + j] == to_find[j])
			{
				if (to_find[j + 1] == '\0')
					return (p);
				j++;
			}
		}
		i++;
	}
	return (0);
}
