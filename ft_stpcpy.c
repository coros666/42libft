#include "libft.h"

char	*ft_stpcpy(char *dst, char const *src)
{
	while (*src)
		*dst++ = *src++;
	*dst = '\0';
	return (dst);
}
