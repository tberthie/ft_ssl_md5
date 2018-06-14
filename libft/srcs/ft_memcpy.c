#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, unsigned int size)
{
	void	*beg;

	beg = dst;
	while (size--)
		*(char*)dst++ = *(char*)src++;
	return (beg);
}
