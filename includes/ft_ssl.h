#ifndef FT_SSL_H
# define FT_SSL_H

# include <stdlib.h>
# include <fcntl.h>
# include <errno.h>
# include <string.h>

# include "libft.h"

# define uint unsigned int

enum		e_algo {
	MD5,
	SHA256
};

enum		e_options {
	ECHO	= 1,
	QUIET	= 2,
	REVERSE	= 4,
	SUM	= 8,
	ARG	= 16
};

void			convert_stdin(char command, uint options);
void			convert_argument(char command, uint options, const char *argument);
uint			get_options(const char **arguments, uint *options);
void			output(char *key, char *data, uint options, const char *file);

void			convert_md5(char *data, uint options, const char *file);
void			convert_sha256(char *data, uint options, const char *file);

#endif
