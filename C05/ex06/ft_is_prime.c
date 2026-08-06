/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabernar <jabernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 17:01:59 by jabernar          #+#    #+#             */
/*   Updated: 2026/08/05 17:42:50 by jabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	count_div;

	i = 1;
	count_div = 0;
	while (i <= nb)
	{
		if (nb % i == 0)
			count_div++;
		i++;
	}
	if (count_div == 2)
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("%i\n", ft_is_prime(17));
	return 0;
}
*/