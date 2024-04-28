/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 22:36:14 by ppeinado          #+#    #+#             */
/*   Updated: 2024/04/13 22:40:03 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	p;

	p = c;
	while (*s != '\0' && *s != p)
		s++;
	if (*s != p)
		return (NULL);
	else
		return ((char *)(s));
}

/*#include <stdio.h>
#include <string.h>
int main(void)
{
    printf("%s", strchr("k<jfsgdaksjg", 'f'));
    printf("%s", ft_strchr("k<jfsgdaksjg", 'f'));
    if ( strchr("\0", '\0') == ft_strchr("\0", '\0'))
        printf("Holi");
    return (0);
}*/
