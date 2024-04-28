/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 13:11:42 by ppeinado          #+#    #+#             */
/*   Updated: 2024/04/05 21:04:22 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				p;
	unsigned char		*d1;
	const unsigned char	*s1;	

	d1 = (unsigned char *)dst;
	s1 = (const unsigned char *)src;
	p = 0;
	if (d1 == NULL && s1 == NULL)
		return (NULL);
	while (n > p)
	{
		d1[p] = s1[p];
		++p;
	}
	return (dst);
}
/*
int main (void)
{
	char dest[60];
	char src[] = "avion";
	ft_memcpy(dest, src, 5);
	printf("Devuelveme el destino: %s", dest);
	return (0);

}*/
