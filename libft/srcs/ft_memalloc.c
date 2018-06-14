#include "libft.h"

void		*ft_memalloc(unsigned int size)
{
	char	*p;

	p = (char*)ft_m(size);
	while (size--)
		p[size] ^= p[size];
	return ((void*)p);
}
