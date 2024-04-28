/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:33:41 by ppeinado          #+#    #+#             */
/*   Updated: 2024/04/10 19:00:45 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	p;

	p = 0;
	while (s[p] != '\0')
	{
		++p;
	}
	return (p);
}

/*
#include <stdio.h>
int main (void)
{
	printf("%d",ft_strlen("caracola"));
	return(0);
}*/
