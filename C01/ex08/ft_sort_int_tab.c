/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabernar <jabernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 13:55:15 by jabernar          #+#    #+#             */
/*   Updated: 2026/07/29 19:31:19 by jabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp_value;

	i = 0;
	j = 0;
	while (j < size -1)
	{
		while (i + 1 < size)
		{
			if (tab[i] > tab[i + 1])
			{
				temp_value = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp_value;
			}
			i++;
		}
		i = 0;
		j++;
	}
}
/*
int	main(void)
{
	int	arr[7] = {3, 5, 20, -5, 1, 4, 2};
	int	arr_size;
	int	i;

	arr_size = sizeof(arr) / 4;
	i = 0;
	ft_sort_int_tab(arr, arr_size);
	while (i < arr_size)
	{
		printf("%i, ", arr[i]);
		i++;
	}
	printf("\n");
}
*/