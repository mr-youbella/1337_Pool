/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 03:55:20 by youbella          #+#    #+#             */
/*   Updated: 2023/09/07 00:10:16 by youbella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *str)
{
	int		i;
	char	*p;

	i = 0;
	while (str[i])
		i++;
	p = malloc(i + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (*str)
		p[i++] = *str++;
	p[i] = '\0';
	return (p);
}
