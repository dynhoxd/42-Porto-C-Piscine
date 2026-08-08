/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabernar <jabernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 17:09:11 by jabernar          #+#    #+#             */
/*   Updated: 2026/08/08 20:25:37 by jabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	if (!to_find[i])
		return (str);
	while (to_find[len])
		len++;
	while (str[i + (len - 1)])
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j])
		{
			j++;
			if (!to_find[j])
				return (&str[i]);
		}
		i++;
	}
	return (0); // correcao aqui
}
/*
int	main(void)
{
	char s[] = "qwerty";
	char f[] = "";
	
	char *result = ft_strstr(s, f);
	printf("%s\n", result);
}
*/