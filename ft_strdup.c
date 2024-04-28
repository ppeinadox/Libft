/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 12:02:48 by ppeinado          #+#    #+#             */
/*   Updated: 2024/04/08 16:13:03 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	int		c;

	p = malloc (ft_strlen(s1) + 1);
	if (p != NULL)
	{
		c = 0;
		while (s1[c] != '\0')
		{
			p[c] = s1[c];
			c++;
		}
		p[c] = '\0';
	}
	return (p);
}

/*#include <stdio.h>
#include <string.h>
int main(void)
{
	printf("%p", ft_strdup("patata"));	
}*/
