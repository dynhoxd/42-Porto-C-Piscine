/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabernar <jabernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 17:29:44 by jabernar          #+#    #+#             */
/*   Updated: 2026/08/06 13:56:57 by jabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;
	int	count_div;

	i = 1;
	count_div = 0;
	if (nb <= 1)
		return (2);
	while (i <= nb)
	{
		if (nb % i == 0)
			count_div++;
		i++;
	}
	if (count_div == 2)
		return (nb);
	return (ft_find_next_prime(++nb));
}
/*
int	main(void)
{
	printf("%i\n", ft_find_next_prime(6));
	return 0;
}
*/