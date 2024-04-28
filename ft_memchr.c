/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 13:35:13 by ppeinado          #+#    #+#             */
/*   Updated: 2024/04/05 20:58:36 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		p;
	size_t				i;
	const unsigned char	*s1 = s;

	p = c;
	i = 0;
	while (i < n)
	{
		if (s1[i] == p)
			return ((void *)s1 + i);
		i++;
	}
	return ((void *) NULL);
}
