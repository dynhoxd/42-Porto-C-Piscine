#ifndef LIBFT_H
# define LIBFT_H

int ft_isalpha(int  n);
int ft_isdigit(int  n);
int ft_isalnum(int  n);
int ft_isascii(int  n);
int ft_isprint(int  n);
int	ft_strlen(char *str);
void    *ft_memset(void *s, int c, size_t n);
void    ft_bzero(void *s, size_t n);

typedef unsigned long size_t;

#endif
