/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabernar <jabernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 20:42:28 by jabernar          #+#    #+#             */
/*   Updated: 2026/08/04 21:28:40 by jabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;
	result = nb;

	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	while (nb > 2)
	{
		result *= (nb - 1);
		nb--;
	}
	return (result);
}
/*
int	main(void)
{
	int	nb = 4;
	printf("%i\n", ft_iterative_factorial(nb));
	return 0;
}
*/