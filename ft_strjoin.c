/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:40:27 by ppeinado          #+#    #+#             */
/*   Updated: 2024/04/08 16:17:44 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	int		c;
	int		i;

	p = malloc((ft_strlen(s1) + ft_strlen(s2) + 1));
	c = 0;
	i = 0;
	if (p != NULL)
	{
		while (s1[c] != '\0')
		{
			p[c] = s1[c];
			c++;
		}
		while (s2[i] != '\0')
		{
			p[c + i] = s2[i];
			i++;
		}
		p[c + i] = '\0';
	}
	return (p);
}
