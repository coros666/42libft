/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coros <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 13:40:46 by coros             #+#    #+#             */
/*   Updated: 2021/03/29 17:40:24 by coros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_minpos(int a, int b)
{
	if (a <= 0)
		return (0);
	else if (a <= b)
		return ((size_t)a);
	else
		return ((size_t)b);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	if (!s)
		return (NULL);
	res = malloc(ft_minpos((int)(ft_strlen(s) - start + 1), len) + 1);
	if (!res)
		return (0);
	i = 0;
	if (start < ft_strlen(s))
	{
		while (i < len && s[start])
			res[i++] = s[start++];
	}
	res[i] = '\0';
	return (res);
}
