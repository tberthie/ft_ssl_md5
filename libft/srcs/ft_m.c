#include "libft.h"

void		*ft_m(unsigned int size)
{
	void	*p;

	p = malloc(size);
	if (p == NULL)
		exit(1);
	return (p);
}
