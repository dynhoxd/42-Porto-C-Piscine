/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabernar <jabernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 13:00:25 by jabernar          #+#    #+#             */
/*   Updated: 2026/08/08 20:26:36 by jabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp_value;

	i = 0;
	while (i < size / 2)
	{
		temp_value = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - (i++)] = temp_value;
	}
}
/*
int	main(void)
{
	int	arr[] = {1, 2, 3, 4, 5, 6, 7};
	int	*p;
	int	i;
	int	size;

	i = 0;
	p = arr;
	size = sizeof(arr) / 4;
	ft_rev_int_tab(p, size);
	while (i < size)
	{
		printf("%i", arr[i]);
		i++;
	}
	printf("\n");
}
*/