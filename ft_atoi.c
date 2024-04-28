/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 20:02:45 by ppeinado          #+#    #+#             */
/*   Updated: 2024/04/05 20:12:11 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

const char	*ft_spaces(const char *str)
{
	int	p;

	p = 0;
	while (str[p] != '\0'
		&& (str[p] == '\t' || str[p] == '\n' || str[p] == '\v'
			|| str[p] == '\f' || str[p] == '\r' || str[p] == ' '))
		p++;
	return (str + p);
}

int	ft_signo(const char *str)
{
	int	signo;
	int	mas;
	int	menos;

	signo = 1;
	mas = 0;
	menos = 0;
	while (*str == '+' || *str == '-')
	{
		if (*str == '+')
			mas++;
		else if (*str == '-')
			menos++;
		str++;
	}
	if ((mas + menos) > 1)
		return (0);
	if (menos == 1)
		signo = -1;
	return (signo);
}

int	ft_atoi(const char *str)
{
	int	resultado;
	int	signo;

	resultado = 0;
	str = ft_spaces(str);
	signo = ft_signo(str);
	while (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		resultado = 10 * resultado + *str - '0';
		++str;
	}
	return (resultado * signo);
}

/*#include <stdlib.h>
#include <stdio.h>

int main (void)
{
	printf("%d", atoi("    12715"));
	printf("%d", ft_atoi("    12715"));
}*/
