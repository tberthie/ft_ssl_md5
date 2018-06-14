#include "ft_ssl.h"

uint		get_options(const char **arguments, uint *options)
{
	uint	shift;

	shift = 0;
	*options = 0;
	while (arguments[shift] &&
		((!ft_strcmp(arguments[shift], "-p") && (*options |= ECHO)) ||
		(!ft_strcmp(arguments[shift], "-q") && (*options |= QUIET)) ||
		(!ft_strcmp(arguments[shift], "-r") && (*options |= REVERSE)) ||
		(!ft_strcmp(arguments[shift], "-s") && (*options |= SUM))))
		shift++;
	return (shift);
}
