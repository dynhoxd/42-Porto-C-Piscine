/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabernar <jabernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 12:08:15 by jabernar          #+#    #+#             */
/*   Updated: 2026/08/09 17:07:30 by jabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*invalid_size(char *dest)
{
	dest = malloc(1);
	if (!dest)
		return (0);
	dest[0] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcat(char *str, char *dest)
{
	int	i;
	int	s_len_now;

	s_len_now = ft_strlen(dest);
	i = 0;
	while (str[i])
	{
		dest[s_len_now + i] = str[i];
		i++;
	}
	dest[s_len_now + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		dest_len;
	int		i;

	dest = 0;
	if (size <= 0)
		return (invalid_size(dest));
	i = 0;
	dest_len = ft_strlen(sep) * (size - 1);
	while (i < size)
		dest_len += ft_strlen(strs[i++]);
	dest = malloc(dest_len + 1);
	if (!dest)
		return (0);
	dest[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(strs[i], dest);
		if (i < size - 1)
			ft_strcat(sep, dest);
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	char	*strs[] = {"Olá", "42", "Porto", "Mundo!"};
	char	*sep = " -> ";
	char	*result;

	printf("=== TESTE 1: Caso Normal ===\n");
	result = ft_strjoin(4, strs, sep);
	printf("Esperado: Olá -> 42 -> Porto -> Mundo!\n");
	printf("Obtido  : %s\n\n", result);
	free(result);

	printf("=== TESTE 2: Apenas 1 Elemento ===\n");
	result = ft_strjoin(1, strs, sep);
	printf("Esperado: Olá\n");
	printf("Obtido  : %s\n\n", result);
	free(result);
	return (0);
}
*/