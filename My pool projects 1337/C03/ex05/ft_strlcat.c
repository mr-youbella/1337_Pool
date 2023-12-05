/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 09:53:38 by youbella          #+#    #+#             */
/*   Updated: 2023/08/28 00:23:06 by youbella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dl;
	unsigned int	sl;

	i = 0;
	dl = 0;
	sl = 0;
	while (dest[dl] && dl < size)
		dl++;
	while (src[sl])
		sl++;
	if (dl == size)
		return (dl + sl);
	if (dl < size - 1)
	{
		while (src[i] && (dl + i) < size - 1)
		{
			dest[dl + i] = src[i];
			i++;
		}
	}
	dest[dl + i] = '\0';
	return (dl + sl);
}
