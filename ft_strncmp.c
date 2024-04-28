/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 16:18:22 by ppeinado          #+#    #+#             */
/*   Updated: 2024/04/08 16:32:24 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	p;

	p = 0;
	while (p < n && (unsigned char)s1[p] && (unsigned char)s2[p])
	{
		if (s1[p] == s2[p])
			++p;
		else if ((unsigned char)s1[p] < (unsigned char)s2[p])
			return (-1);
		else
			return (1);
	}
	if (p == n)
		return (0);
	if ((unsigned char)s1[p] == '\0' && (unsigned char)s2[p] == '\0')
		return (0);
	else if ((unsigned char)s1[p] == '\0')
		return (-1);
	else
		return (1);
}

/*
#include <stdio.h>
#include <string.h>
int main (void)
{
	printf("%d\n",ft_strncmp("carocola", "Caracolo",  5));
	printf("%d\n",ft_strncmp("92832zarocola", "caracolo",  5));
	printf("%d\n",ft_strncmp("-555zarocola", "-555caracolo",  5));
	printf("%d\n",ft_strncmp("Caracola", "caracolo",  5));
	printf("%d\n",ft_strncmp("patricia", "patricio",  5));
	printf("Test 6: Expect: %d Response: %d\n",strncmp("lalala", "lalalaº",  5), 
	ft_strncmp("lalala", "lalalaº",  5));
}*/
