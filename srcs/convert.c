#include "ft_ssl.h"

static void		(*algorithms[2])(char *data, uint options, const char *file) =
{
	convert_md5,
	convert_sha256
};

void			convert_stdin(char command, uint options)
{
	char		*data;
	char		*buffer;

	data = ft_strnew();
	while ((buffer = ft_gnl(0)))
	{
		ft_strspush(&data, buffer);
		free(buffer);
	}
	algorithms[(uint)command](data, options, 0);
	free(data);
}

void			convert_argument(char command, uint options, const char *argument)
{
	static char	file = 0;
	char		*data;
	char		*buffer;
	int		fd;

	if ((fd = open(argument, O_RDONLY)) > -1)
	{
		data = ft_strnew();
		while ((buffer = ft_gnl(fd)))
		{
			ft_strspush(&data, buffer);
			free(buffer);
		}
		file = 1;
	}
	else if (!file)
	{
		data = ft_strdup(argument);
		argument = 0;
	}
	if (file && fd == -1)
		ft_print(2, "ft_ssl: %s: %s\n", argument, strerror(errno));
	else
	{
		algorithms[(uint)command](data, options, argument);
		free(data);
	}
}
