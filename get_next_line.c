#include "libft.h"

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 32
#endif

static char	*newstr(void);
static char	*my_strchr(char *s, char c);
static char	*my_strjoin(char *dst, char const *src);

char	*get_next_line(int const fd)
{
	static char	buf[255][BUFFER_SIZE + 1];
	char		*line;
	char		*found;
	size_t		bytes;

	bytes = BUFFER_SIZE;
	line = newstr();
	while (BUFFER_SIZE > 0 && line && !read(fd, buf[fd], 0))
	{
		found = my_strchr(buf[fd], '\n');
		line = my_strjoin(line, buf[fd]);
		if (found)
		{
			ft_stpcpy(buf[fd], found);
			return (my_strjoin(line, "\n"));
		}
		ft_bzero(buf[fd], BUFFER_SIZE);
		if (bytes != BUFFER_SIZE)
			return (line);
		bytes = read(fd, buf[fd], BUFFER_SIZE);
		if (bytes < 1 && !(*line))
			break ;
	}
	free(line);
	return (NULL);
}

static char	*newstr(void)
{
	char	*ret;

	ret = malloc(1);
	*ret = '\0';
	return (ret);
}

static char	*my_strchr(char *s, char c)
{
	while (*s != c)
		if (*s++ == '\0')
			return (NULL);
	*s++ = '\0';
	return (s);
}

static char	*my_strjoin(char *dst, char const *src)
{
	char	*ret;
	char	*tmp;

	ret = malloc(sizeof(*ret) * (1 + ft_strlen(dst) + ft_strlen(src)));
	tmp = ret;
	if (ret)
	{
		ft_stpcpy(ft_stpcpy(tmp, dst), src);
		free(dst);
		dst = NULL;
	}
	return (ret);
}