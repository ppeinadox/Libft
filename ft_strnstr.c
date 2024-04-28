/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 17:16:13 by ppeinado          #+#    #+#             */
/*   Updated: 2024/04/08 16:36:01 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	p;
	size_t	j;

	p = 0;
	if (!needle[0])
		return ((char *)(haystack));
	while (haystack[p] && len > p)
	{
		j = 0;
		while (haystack[p + j] == needle[j]
			&& len > (p + j) && haystack[p + j] && needle[j])
			++j;
		if (!needle[j])
			return ((char *)(haystack + p));
		++p;
	}
	return (NULL);
}

/*int main(void)
{
	printf("%s", strnstr("hola caracola", "hola", 0));
	printf("%s", ft_strnstr("hola caracola", "hola", 0));
	printf("%s", ft_strnstr("hola caracola", "caracola", 7));	
	printf("%s", strnstr("hola caracola", "caracola", 7));
	return(0);
}*/
