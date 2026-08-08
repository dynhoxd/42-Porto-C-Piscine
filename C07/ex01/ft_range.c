/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabernar <jabernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 20:51:31 by jabernar          #+#    #+#             */
/*   Updated: 2026/08/08 23:03:58 by jabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < (max - min))
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
/*
int	main(void)
{
	int	*arr;
	int	i = 0;
	int	min = 4;
	int max = 9;

	if (min >= max)
		return (0);
	arr = malloc(max - min);
	if (!arr)
		return (0);
	arr = ft_range(4, 9);
	while (i < (max - min))
		printf("%i\n", arr[i++]);
	return 0;
}
*/
