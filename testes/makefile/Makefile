CC = gcc
CFLAGS = -Wall -Werror -Wextra -g
SRCS = $(wildcard *.c)
OBJS = $(SRCS:%.c=build/%.o)

programa: $(OBJS)
	@$(CC) $(CFLAGS) $^ -o $@

build/%.o: %.c
	@mkdir -p build
	@$(CC) -c $(CFLAGS) $< -o $@

run: programa
	@./$<

clean:
	@rm -rf programa