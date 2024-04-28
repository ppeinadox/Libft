/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 13:18:48 by ppeinado          #+#    #+#             */
/*   Updated: 2024/04/08 16:27:33 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	p;
	size_t	contadorsrc;

	p = 0;
	contadorsrc = 0;
	if (dstsize != '\0')
	{
		while (dstsize != 0 && (dstsize - 1) > p && src[p] != '\0')
		{
			dst[p] = src[p];
			p++;
		}
		dst[p] = '\0';
	}
	while (src[contadorsrc] != '\0')
	{
		contadorsrc++;
	}
	return (contadorsrc);
}

/*int  main(void)
{
    char dst[9];
    const char * restrict src = "patata";
    size_t copiar = ft_strlcpy(dst,src,5);
    printf("dst: %s\n", dst);
    printf("Número de caracteres copiados: %zu\n", copiar);
    return 0;
}*/
