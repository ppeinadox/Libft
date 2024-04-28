/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 18:03:16 by ppeinado          #+#    #+#             */
/*   Updated: 2024/04/13 23:34:03 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	front(char const *s1, char const *set)
{
	int		q;

	q = 0;
	while (s1[q] != '\0' && ft_strchr(set, s1[q]) != NULL)
		q++;
	return (q);
}

int	back(char const *s1, char const *set)
{
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(s1);
	while (len > 0 && ft_strchr(set, s1[len - 1]) != NULL)
		len--;
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*resultado;
	int		i;
	int		q;

	q = front(s1, set);
	i = back(s1, set);
	resultado = ft_substr(s1, q, i - q);
	if (!resultado)
		return (NULL);
	return (resultado);
}
/*
int main (void)
{
	printf("%s", ft_strtrim("3 9 patata 9835 ", " 9853"));
	return (0);
}*/
