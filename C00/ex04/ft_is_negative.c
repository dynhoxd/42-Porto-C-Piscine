/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabernar <jabernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 13:14:33 by jabernar          #+#    #+#             */
/*   Updated: 2026/07/25 15:05:21 by jabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	n_check;

	if (n < 0)
	{
		n_check = 'N';
		write(1, &n_check, 1);
	}
	else
	{
		n_check = 'P';
		write(1, &n_check, 1);
	}
}

/*
int	main(void)
{
	ft_is_negative(2);
}
*/
