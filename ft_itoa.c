/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 23:49:15 by ppeinado          #+#    #+#             */
/*   Updated: 2024/04/18 14:52:11 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	contador(int n)
{
	int	aux;
	int	c;

	c = 0;
	aux = n;
	if (aux == 0)
		return (1);
	else
	{
		if (aux < 0)
			aux = -aux;
		while (aux != 0)
		{
			aux = aux / 10;
			c++;
		}
	}
	if (n < 0)
		c++;
	return (c);
}

int	mayorquenueve(int n, int c, int i, char *p)
{
	while (c > i)
	{
		c--;
		p[c] = (n % 10) + '0';
		n = n / 10;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		i;
	int		c;

	i = 0;
	c = contador(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	p = (char *)malloc(c + 1);
	if (!p)
		return (NULL);
	if (n < 0)
	{
		p[i++] = '-';
		n = -n;
	}
	p [c] = '\0';
	if (n > 9)
		c = mayorquenueve(n, c, i, p);
	else
	{
		c--;
		p[c] = n + '0';
	}
	return (p);
}

/*#include <stdio.h>
int main (void)
{
	printf("%s", ft_itoa(73550257));
	return (0);
}*/
