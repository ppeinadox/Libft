/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 13:20:25 by ppeinado          #+#    #+#             */
/*   Updated: 2024/04/08 16:21:43 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	p;

	len = 0;
	p = 0;
	while (dst[p] != '\0' && dstsize > p)
		p++;
	len = p;
	while (src[p - len] != '\0' && dstsize > p + 1)
	{
		dst[p] = src[p - len];
		p++;
	}
	if (dstsize > len)
		dst[p] = '\0';
	return (len + ft_strlen(src));
}
