CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/main.c
OBJS = $(SRCS:%.c=%.o)

all: libft.a

libft.a: $(OBJS)
	ar crs libft.a $^

srcs/%.o: srcs/%.c
	$(CC) -c $(CFLAGS) -I includes $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf libft.a

re: fclean all