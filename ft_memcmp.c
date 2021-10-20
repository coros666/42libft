/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coros <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:09:36 by coros             #+#    #+#             */
/*   Updated: 2021/03/23 13:19:00 by coros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
	{
		if (((((unsigned char *)s1)[i]) != ((unsigned char *)s2)[i]))
			return (((((unsigned char *)s1)[i]) - ((unsigned char *)s2)[i]));
	}
	return (0);
}
