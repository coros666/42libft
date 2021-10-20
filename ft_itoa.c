/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coros <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 15:48:43 by coros             #+#    #+#             */
/*   Updated: 2021/03/29 16:34:25 by coros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int					i;
	unsigned int		nb;

	i = 0;
	if (n < 0)
	{
		i = 1;
		nb = -n;
	}
	else
		nb = n;
	while (nb / 10 > 0)
	{
		i++;
		nb /= 10;
	}
	return (i + 1);
}

char	*ft_itoa(int n)
{
	char				*s;
	unsigned int		nb;
	int					i;
	int					stop;

	nb = n;
	stop = 0;
	s = malloc(ft_len(n) + 1);
	if (!s)
		return (NULL);
	if (n < 0)
	{
		s[0] = '-';
		nb = -n;
		stop = 1;
	}
	i = ft_len(n);
	s[i] = '\0';
	while (--i >= stop)
	{
		s[i] = (nb % 10) + 48;
		nb /= 10;
	}
	return (s);
}
