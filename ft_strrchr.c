/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strrchr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: abinsafw <abinsafw@student.42abudhabi.ae> #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/18 23:04:52 by abinsafw         #+#    #+#              */
/*   Updated: 2026/10/22 00:32:08 by abinsafw        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*delta;
	size_t	occ;
	size_t	len;

	len = ft_strlen(s);
	occ = 0;
	while (len + 1 > 0)
	{
		if (*s == '\0')
			delta = (char *) s;
		if (*s == c)
			occ++;
		s++;
		len--;
	}
	if (occ == 0)
		return ((void *) 0);
	if (c == *s)
		return (delta);
	while (s--)
	{
		if (*s == c)
			return ((char *) s);
	}
	return (NULL);
}
