#include "libft.h"

int			ft_parrfind(void **tab, void *elem)
{
	int	i;

	i = 0;
	while (i < (int)ft_parrlen((void**)tab))
	{
		if (tab[i] == elem)
			return (i);
		i++;
	}
	return (-1);
}
