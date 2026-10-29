/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabernar <jabernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 12:11:39 by jabernar          #+#    #+#             */
/*   Updated: 2026/08/13 11:54:27 by jabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

/*
typedef struct s_stock_str
{
int size;
char *str;
char *copy;
} 			t_stock_str;
*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*str_copy;

	str_copy = malloc(ft_strlen(str) + 1);
	if (!str_copy)
		return (NULL);
	i = 0;
	while (str[i])
	{
		str_copy[i] = str[i];
		i++;
	}
	str_copy[i] = '\0';
	return (str_copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;
	int			i;

	arr = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		if (!arr[i].copy)
			return (NULL);
		i++;
	}
	arr[i].size = 0;
	arr[i].str = 0;
	arr[i].copy = 0;
	return (arr);
}

/*
int	main(void)
{
	char	*args[] = {"Portugal", "Brazil", "Angola", "Cape Verde"};
	t_stock_str *ret_arr = malloc(sizeof(struct s_stock_str) + 5);
	if (!ret_arr)
		return 0;
	ret_arr = ft_strs_to_tab(4, args);
	printf("string: %s , e seu tamanho: %i\n", ret_arr[2].copy, ret_arr[2].size);
	return 0;
}
*/