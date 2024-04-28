/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 20:17:07 by ppeinado          #+#    #+#             */
/*   Updated: 2024/04/05 20:31:25 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc((count * size));
	if (p != NULL)
	{
		ft_memset(p, 0, (count * size));
	}
	return (p);
}

/*int main (void)
{
	printf("%p",calloc(5,7));
	printf("%p",ft_calloc(5,7));
}*/
