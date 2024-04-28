/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 13:51:57 by ppeinado          #+#    #+#             */
/*   Updated: 2024/04/08 16:01:54 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	p;

	p = 0;
	while (len > p)
	{
		((unsigned char *)b)[p] = (unsigned char)c;
		++p;
	}
	return (b);
}

/*#include <string.h>
#include <stdio.h>
int main (void)
{
	char str[10] = "gfd";
	printf("%s", (char *)ft_memset(str, '3', 5));
}*/
