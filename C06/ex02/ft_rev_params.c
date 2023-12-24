/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 19:05:59 by youbella          #+#    #+#             */
/*   Updated: 2023/09/02 19:19:47 by youbella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	while (argv[argc - 1])
	{
		if (argc > 1)
		{
			i = 0;
			while (argv[argc - 1][i])
			{
				write(1, &argv[argc - 1][i], 1);
				i++;
			}
			write(1, "\n", 1);
		}
		argc--;
	}
}
