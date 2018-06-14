NAME = ft_ssl

OBJS = $(addprefix objs/, $(addsuffix .o, \
	main convert options output md5 sha256 ))

all: $(NAME)

$(NAME): objs $(OBJS)
	make -C libft
	gcc -o $(NAME) $(OBJS) libft/libft.a

objs/%.o: srcs/%.c
	gcc -o $@ -c $< -Wall -Wextra -I includes -I libft

objs:
	mkdir objs

clean:
	make -C libft clean
	rm -rf objs

fclean: clean
	rm -f libft/libft.a
	rm -f $(NAME)

re: fclean all
