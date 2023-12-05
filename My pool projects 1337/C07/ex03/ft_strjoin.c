/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:21:23 by youbella          #+#    #+#             */
/*   Updated: 2023/09/07 00:12:03 by youbella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len_x(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*len_y(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*p;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += len_x(strs[i]);
		i++;
	}
	len += len_x(sep) * size - 1;
	if (size <= 0)
		len = 1;
	p = malloc(len);
	if (!p)
		return (NULL);
	return (p);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		x;
	char	*p;

	i = 0;
	j = 0;
	x = 0;
	p = len_y(size, strs, sep);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			p[x++] = strs[i][j++];
		j = 0;
		while (sep[j] && i != size - 1)
			p[x++] = sep[j++];
		i++;
	}
	p[x] = '\0';
	return (p);
}
