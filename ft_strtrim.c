/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coros <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 13:50:32 by coros             #+#    #+#             */
/*   Updated: 2021/03/30 13:50:34 by coros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_sep(char c, char const *set)
{
	while ((char)*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	i;
	size_t	j;

	i = 0;
	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	while (s1[i] && is_sep(((char *)s1)[i], set))
		i++;
	j = ft_strlen(s1) - 1;
	if (i == j)
		return (NULL);
	while ((j > i && is_sep(((char *)s1)[j], set)))
		j--;
	res = ft_substr(s1, i, j - i + 1);
	if (!res)
		return (NULL);
	return (res);
}
