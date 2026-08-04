/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabernar <jabernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 20:21:55 by jabernar          #+#    #+#             */
/*   Updated: 2026/07/29 18:48:47 by jabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_value;

	temp_value = *a;
	*a = *a / *b;
	*b = temp_value % *b;
}
/*
int	main(void)
{
	int	v1;
	int	v2;

	printf("Choose a dividend: ");
	scanf("%i", &v1);
	printf("Choose a divisor: ");
	scanf("%i", &v2);
	ft_div_mod(&v1, &v2);
	printf("Quotient = %i\nRemainder = %i\n", v1, v2);
}
*/