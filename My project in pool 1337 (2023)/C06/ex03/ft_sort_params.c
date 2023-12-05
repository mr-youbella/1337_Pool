/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 17:45:24 by youbella          #+#    #+#             */
/*   Updated: 2023/09/03 02:16:52 by youbella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*t;

	i = 0;
	while (++i < argc)
	{
		j = i;
		while (++j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) < 0)
			{
				t = argv[j];
				argv[j] = argv[i];
				argv[i] = t;
			}
		}
	}
	while (--argc > 0)
		ft_putstr(argv[argc]);
}
