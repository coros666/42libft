/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coros <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 08:36:53 by coros             #+#    #+#             */
/*   Updated: 2021/03/29 13:34:35 by coros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!((char *)needle)[0])
		return ((char *)haystack);
	while (i <= (len - ft_strlen(needle)) && ((char *)haystack)[i])
	{
		j = 0;
		while (needle[j] == haystack[i + j] && (i + j) < len)
		{
			j++;
			if (!((char *)needle)[j])
				return (&(((char *)haystack)[i]));
		}
		i++;
	}
	return (NULL);
}
