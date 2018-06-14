#include "libft.h"

void		*ft_bzero(void *mem, unsigned int size)
{
	void	*beg;

	beg = mem;
	while (size--)
		*(char*)mem++ = 0;
	return (beg);
}
