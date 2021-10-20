/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coros <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 10:27:03 by coros             #+#    #+#             */
/*   Updated: 2021/03/29 17:38:31 by coros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!src)
		return (0);
	if (!dstsize)
		return (ft_strlen(src));
	if (dstsize < ft_strlen(src))
	{
		while (i < dstsize - 1)
		{
			dst[i] = ((char *)src)[i];
			i++;
		}
		dst[i] = '\0';
		return (ft_strlen(src));
	}
	while (i < dstsize - 1 && src[i])
	{
		dst[i] = ((char *)src)[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
