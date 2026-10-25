/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: abinsafw <abinsafw@student.42abudhabi.ae> #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/25 19:36:25 by abinsafw         #+#    #+#              */
/*   Updated: 2026/10/25 19:58:35 by abinsafw        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			len;
	size_t			check;
	unsigned char	*p;

	p = (unsigned char *) s;
	check = n;
	len = 0;
	if (s == NULL)
		return (NULL);
	while (n > 0)
	{
		if (*p == c)
			break ;
		p++;
		len++;
		n--;
	}
	if (n == 0 && *p != c)
		return (NULL);
	return (p);
}
