/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coros <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 13:19:29 by coros             #+#    #+#             */
/*   Updated: 2021/03/29 13:32:04 by coros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*res;

	len = ft_strlen(s1);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	while (len)
	{
		res[len] = ((char *)s1)[len];
		len--;
	}
	res[0] = ((char *)s1)[0];
	return (res);
}
