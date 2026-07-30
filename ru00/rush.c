/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabernar <jabernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 12:38:35 by jabernar          #+#    #+#             */
/*   Updated: 2026/07/27 12:55:48 by jabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	first_line(int row, int x)
{
	int	col;

	col = 1;
	ft_putchar('/');
	col++;
	while (col < x)
	{
		ft_putchar('*');
		col++;
	}
	ft_putchar('\\');
	ft_putchar('\n');
	return ++row;
}

int	middle_lines(int row, int x)
{
	int col;

	col = 1;
	while (col <= x)
	{
		if (col == 1 || col == x)
		{
			ft_putchar('*');
		}
		if (col < x && col != 1)
		{
			ft_putchar(' ');
		}
		col++;
	}
	ft_putchar('\n');
	return ++row;
}

void	last_line(int x)
{
	int col;

	col = 1;
	ft_putchar('\\');
	col++;
	while (col < x)
	{
		ft_putchar('*');
		col++;
	}
	ft_putchar('/');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int col;
	int row;

	row = 1;
	if (row == 1 && row <= y)
	{
		row = first_line(row, x);
	}
	while (row > 1 && row < y)
	{
		row = middle_lines(row, x);
	}
	if (row == y)
	{
		last_line(x);
	}
}
