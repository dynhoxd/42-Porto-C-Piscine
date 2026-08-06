/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabernar <jabernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 12:29:56 by jabernar          #+#    #+#             */
/*   Updated: 2026/08/06 17:45:26 by jabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	if (nb > 2)
	{
		return (nb *= (ft_recursive_factorial(nb - 1)));
	}
	return (nb);
}
/*
int	main(void)
{
	printf("%i\n", ft_recursive_factorial(5));
}
*/