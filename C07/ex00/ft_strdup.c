/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabernar <jabernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 17:27:21 by jabernar          #+#    #+#             */
/*   Updated: 2026/08/08 20:31:53 by jabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*new_str;
	int		i;

	i = 0;
	while (src[i])
		i++;
	new_str = malloc(i + 1);
	if (!new_str)
		return (0);
	i = 0;
	while (src[i])
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
/*
int	main(void)
{
	char	s[] = "42 is 42";
	// printf("%s\n", ft_strdup(s));
	printf("%p\n", s);
	printf("%p\n", ft_strdup(s));
	return 0;
}
*/
