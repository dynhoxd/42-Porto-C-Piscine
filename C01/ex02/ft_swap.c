/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabernar <jabernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 18:57:49 by jabernar          #+#    #+#             */
/*   Updated: 2026/07/28 19:12:15 by jabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp_value;

	temp_value = *b;
	*b = *a;
	*a = temp_value;
}
/*
int	main()
{
	int	var1;
	int	var2;

	var1 = 5;
	var2 = 8;
	ft_swap(&var1, &var2);
	printf("%d\n%d\n", var1, var2);
}
*/