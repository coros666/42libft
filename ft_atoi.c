/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coros <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 09:06:38 by coros             #+#    #+#             */
/*   Updated: 2021/03/29 13:28:57 by coros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_isspace(char	c)
{
	if (c == '\t' || c == '\n' || c == '\r' || c == '\v' || c == '\f' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		n;
	int		sign;
	size_t	i;

	n = 0;
	i = 0;
	sign = 1;
	while (ft_isspace(((char *)str)[i]))
		i++;
	if (((char *)str)[i] == '-' || ((char *)str)[i] == '+')
	{
		if (((char *)str)[i] == '-')
			sign *= -1;
		if (((char *)str)[i + 1] == '-' || ((char *)str)[i + 1] == '+')
			return (0);
		i++;
	}
	while (ft_isdigit(((char *)str)[i]))
	{
		n = (10 * n) + (((char *)str)[i] - 48);
		i++;
	}
	return (sign * n);
}
