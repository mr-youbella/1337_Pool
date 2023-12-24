/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 01:56:05 by youbella          #+#    #+#             */
/*   Updated: 2023/09/07 02:10:44 by youbella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	len(char *b)
{
	int	i;

	i = 0;
	while (b[i])
		i++;
	return (i);
}

int	error(char *b)
{
	char	*t;

	if (!*b || !(*b + 1))
		return (0);
	while (*b)
	{
		if (*b == '-' || *b == '+')
			return (0);
		t = b + 1;
		while (*t)
		{
			if (*b == *t)
				return (0);
			t++;
		}
		b++;
	}
	return (1);
}

int	nor(char *base, char *str, int i, int r)
{
	int	j;

	while (str[i])
	{
		j = 0;
		while (base[j] && base[j] != str[i])
			j++;
		if (!base[j])
			break ;
		r = r * len(base) + j;
		i++;
	}
	return (r);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	r;
	int	s;

	i = 0;
	r = 0;
	s = 1;
	if (!error(base))
		return (0);
	while ((str[i] <= 15 && str[i] >= 9) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = s * -1;
		i++;
	}
	return (nor(base, str, i, r) * s);
}
