/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coros <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 17:40:36 by coros             #+#    #+#             */
/*   Updated: 2021/03/29 17:41:51 by coros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	res = malloc(1 + ft_strlen(s1) + ft_strlen(s2));
	if (!res)
		return (NULL);
	i = 0;
	while ((char)*s1)
	{
		res[i] = (char)*s1;
		i++;
		s1++;
	}
	while ((char)*s2)
	{
		res[i] = (char)*s2;
		i++;
		s2++;
	}
	res[i] = '\0';
	return (res);
}
