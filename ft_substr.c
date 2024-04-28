/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 12:55:08 by ppeinado          #+#    #+#             */
/*   Updated: 2024/04/13 22:18:47 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	int		i;

	i = 0;
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	p = malloc (sizeof(char) * (len + 1));
	if (p != NULL)
	{
		while (len > 0 && s[start] != '\0')
		{
			p[i] = s[start];
			start++;
			i++;
			len--;
		}
		p[i] = '\0';
	}
	return (p);
}

/*#include <stdio.h>
int main (void)
{
	printf("%p",ft_substr("patata", 3, 6));
}*/
