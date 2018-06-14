#include "libft.h"

void			ft_strswap(char **str, char *new)
{
	free(*str);
	*str = new;
}
