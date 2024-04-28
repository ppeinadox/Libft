/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:25:15 by ppeinado          #+#    #+#             */
/*   Updated: 2024/04/05 20:56:45 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1 = (const unsigned char *)s1;
	const unsigned char	*p2 = (const unsigned char *)s2;
	size_t				p;

	p = 0;
	if (n == 0)
		return (0);
	while (n - 1 > p && p1[p] == p2[p])
	{
		++p;
	}
	if (p1[p] != p2[p])
		return (p1[p] - p2[p]);
	return (0);
}

/*
int main()
{
	printf("%d", ft_memcmp("Hola caracola","hola patata", 4));
	printf("%d", memcmp("Hola caracola","hola patata", 4));
	printf("%d", ft_memcmp("hola caracola","Hola", 4));
	printf("%d", memcmp("hola caracola","Hola", 4));
	printf("%d", memcmp("","", 4));
	printf("%d", ft_memcmp("","", 4));
	return 0;
}*/
