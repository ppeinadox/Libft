/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 13:15:55 by ppeinado          #+#    #+#             */
/*   Updated: 2024/04/08 16:01:11 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				p;
	unsigned char		*d1;
	const unsigned char	*s1;

	d1 = (unsigned char *)dst;
	s1 = (const unsigned char *)src;
	p = 0;
	if (dst == src)
		return (dst);
	if (d1 > s1)
	{
		while (len--)
		{
			d1[len] = s1[len];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
