#include "libft.h"

void		*ft_strcpy(char *dest, const char *src)
{
	char	*beg;

	beg = dest;
	while (*src)
		*dest++ = *src++;
	*dest = 0;
	return (beg);
}
