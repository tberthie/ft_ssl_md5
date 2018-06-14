#include "libft.h"

#define RFC_SIZE 2

char		*ft_rfd(int fd)
{
	char	*data;
	char	*tmp;
	char	buff[RFC_SIZE];
	int	rd;

	data = ft_strnew();
	while ((rd = read(fd, buff, RFC_SIZE - 1)) > 0)
	{
		buff[rd] = 0;
		while ((tmp = ft_strchr(buff, '\r')))
			ft_strcpy(tmp, tmp + 1);
		ft_strspush(&data, buff);
	}
	return (data);
}
