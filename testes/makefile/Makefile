CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/main.c #falta apagar o main para entregar o exercício
OBJS = $(SRCS:%.c=%.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar crs $@ $^

srcs/%.o: srcs/%.c
	$(CC) -c $(CFLAGS) -I includes $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME) #exec

re: fclean all

#exec: $(NAME)
#	$(CC) $(CFLAGS) -L. -lft -o $@
#	./$@

.PHONY: all clean fclean re