/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabernar <jabernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 19:37:32 by jabernar          #+#    #+#             */
/*   Updated: 2026/07/28 19:18:34 by jabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	quoti;
	int	remai;

	printf("Choose a dividend ");
	scanf("%i", &a);
	printf("Choose a divisor ");
	scanf("%i", &b);
	ft_div_mod(a, b, &quoti, &remai);
	printf("Quotient = %i\nRemainder = %i\n", quoti, remai);
}
*/
