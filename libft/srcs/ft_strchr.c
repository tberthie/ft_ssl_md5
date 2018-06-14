#include "libft.h"

char		*ft_strchr(char *s, char c)
{
	while (*s && *s != c)
		s++;
	return (*s ? s : 0);
}
