/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabernar <jabernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 16:55:53 by jabernar          #+#    #+#             */
/*   Updated: 2026/08/08 18:12:53 by jabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	j = argc - 1;
	while (j)
	{
		i = 0;
		while (argv[j][i])
		{
			write(1, &argv[j][i++], 1);
		}
		write (1, "\n", 1);
		j--;
	}
}
