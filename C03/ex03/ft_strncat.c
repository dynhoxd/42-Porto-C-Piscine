/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabernar <jabernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 19:42:01 by jabernar          #+#    #+#             */
/*   Updated: 2026/08/02 18:54:37 by jabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				len;
	unsigned int	i;

	len = 0;
	i = 0;
	if (!src[i])
		return (dest);
	while (dest[len])
		len++;
	while (i < nb && src[i])
	{
		dest[len + i] = src [i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char s1[] = "cats";
	char s2[8] = "dogs";
	int	n = 3;
	ft_strncat(s2, s1);
	printf("%s\n", s2);
}
*/
