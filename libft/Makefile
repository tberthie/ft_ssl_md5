OBJS = $(addprefix objs/ft_,$(addsuffix .o,\
	atoi atoip itoa itoabase utoabase\
	bzero freeret freeswap ptrswap free\
	m memalloc memcpy \
	gnl rfc gdc rfd\
	isdir\
	putchar putnchar putnbr\
	strlen strcat strchr strcmp strcpy strdup\
	strrchr strstr strrstr strncmp stricmp strndup strjoin strnjoin strcjoin\
	strsjoin strsplit\
	strrem strfrmchr strcount\
	strswap strnew strpush strspush strins strsins strrem\
	strarrdup strarrstr strarrstrn strarrrem strarrstrlen strarrstrstrr\
	parrnew parrinit parrfree parrelmfree parrpush parrprem parrrem parrlen\
	parrdup parrndup parrjoin parrbeg parrfind \
	intlen\
	print noprint\
	))

NAME=libft.a

all: $(NAME)

$(NAME): objs $(OBJS)
	ar rcs $(NAME) $(OBJS)

objs:
	mkdir objs

objs/%.o: srcs/%.c
	gcc -c $< -o $@ -Wall -Wextra -Werror -O3 -I. -g

clean:
	rm -rf objs

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
