/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabernar <jabernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 14:08:05 by jabernar          #+#    #+#             */
/*   Updated: 2026/08/06 17:46:41 by jabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = nb;
	while (power-- > 1)
	{
		result *= nb;
	}
	return (result);
}
/*
int	main(void)
{
	printf("%i\n", ft_iterative_power(-2, 3));
	return 0;
}
*/