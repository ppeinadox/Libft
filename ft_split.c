/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeinado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:46:44 by ppeinado          #+#    #+#             */
/*   Updated: 2024/04/18 15:39:28 by ppeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int countwords(char const *s, char c)
{
	int	p;
	
	p = 0;	
	while (*s == c)
		++s;
	while (*s)
    {
		if (*s == c && *(s-1) != c)
			p++;
		if(*s != c && *(s+1) == '\0')
			p++;
	}
	return (p);
}
char **ft_split(char const *s, char c)
{
	int	p;

	p = countwords(s, c);

}
