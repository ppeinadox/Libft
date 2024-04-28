/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 21:34:45 by ppeinado          #+#    #+#             */
/*   Updated: 2024/04/13 23:09:50 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	p;

	p = 0;
	if (s != NULL && f != NULL)
	{
		while (s[p] != '\0')
		{
			f(p, &s[p]);
			p++;
		}
	}
}
