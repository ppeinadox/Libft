/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 13:29:34 by ppeinado          #+#    #+#             */
/*   Updated: 2024/04/13 22:34:21 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	p;
	int		a;

	p = c;
	a = 0;
	while (s[a] != '\0')
		a++;
	while (s[a] != p && a > 0)
		a--;
	if (s[a] == p)
		return ((char *)s + a);
	return (NULL);
}
