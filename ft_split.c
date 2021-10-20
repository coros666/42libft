/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coros <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 13:51:06 by coros             #+#    #+#             */
/*   Updated: 2021/10/20 22:36:23 by carolineo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *s, char c)
{
	int		n;
	size_t	i;

	n = 0;
	i = 0;
	while (i < ft_strlen(s))
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			n += 1;
		while (s[i] && s[i] != c)
			i++;
	}
	return (n);
}

static char	*ft_putword(char const *s, char c, size_t k)
{
	size_t	i;
	size_t	j;
	char	*res;

	j = 0;
	i = k;
	while (s[i] && s[i] != c)
	{
		i++;
		j++;
	}
	res = malloc(j + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (i < j)
		res[i++] = s[k++];
	res[i] = '\0';
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	size_t	k;

	if (!s)
		return (NULL);
	res = malloc(sizeof(char *) * ft_countwords(s, c) + 1);
	if (!res)
		return (NULL);
	i = -1;
	k = 0;
	while (++i < ft_countwords(s, c))
	{
		while (s[k] && s[k] == c)
			k++;
		if (s[k] && s[k] != c)
		{
			res[i] = ft_putword(s, c, k);
			if (!res[i])
				return (NULL);
		}
		k += ft_strlen(res[i]);
	}
	res[i] = NULL;
	return (res);
}
