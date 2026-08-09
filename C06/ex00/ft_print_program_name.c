/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabernar <jabernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 11:51:16 by jabernar          #+#    #+#             */
/*   Updated: 2026/08/08 18:12:34 by jabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	(void)argc;
	i = 0;
	while (argv[0][i])
		write (1, &argv[0][i++], 1);
	write (1, "\n", 1);
	return (0);
}
