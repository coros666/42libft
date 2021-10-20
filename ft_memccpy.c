/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coros <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:09:25 by coros             #+#    #+#             */
/*   Updated: 2021/03/26 14:17:27 by coros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, void const *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((((unsigned char *) src)[i]) == ((unsigned char)c))
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			return (&dst[i + 1]);
		}
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (NULL);
}
