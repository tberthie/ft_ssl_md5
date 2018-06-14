#include "ft_ssl.h"

void		convert_md5(char *data, uint options, const char *file)
{
	char	*key;

	key = strdup("a48944qd48q0q18q16d19g84r6");
	output(key, data, options, file);
	free(key); 
}
