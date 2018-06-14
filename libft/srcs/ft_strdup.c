#include "libft.h"

char		*ft_strdup(const char *s)
{
	char	*new;
	int	i;

	i = ft_strlen(s);
	new = ft_m(i + 1);
	new[i] ^= new[i];
	while (i--)
		new[i] = s[i];
	return (new);
}
