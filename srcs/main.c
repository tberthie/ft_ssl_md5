#include "ft_ssl.h"

static char		get_command(const char *command)
{
	if (!ft_strcmp(command, "md5"))
		return (MD5);
	else if (!ft_strcmp(command, "sha256"))
		return (SHA256);
	return (-1);
}

int			main(int ac, char **av)
{
	char		command;
	uint		options;
	uint		shift;
	
	if (ac < 2)
		ft_print(2, "usage: ft_ssl [command opts] [command args]\n");
	else
	{
		if ((command = get_command(av[1])) == -1)
			ft_print(2, "ft_ssl: Error: '%s' is an invalid command.\n", av[1]);
		shift = 2 + (ac > 2 ? get_options((const char**)av + 2, &options) : 0);
		if (shift == (uint)ac || options & ECHO)
			convert_stdin(command, options);
		while (shift < (uint)ac)
			convert_argument(command, options | ARG, av[shift++]);
	}
	return (0);
}
