/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memcpy.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: abinsafw <abinsafw@student.42abudhabi.ae> #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/14 18:40:12 by abinsafw         #+#    #+#              */
/*   Updated: 2026/10/16 18:05:51 by abinsafw        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*psrc;
	unsigned char		*pdst;

	if (!dest && !src)
	{
		return (NULL);
	}
	psrc = (const unsigned char *) src;
	pdst = (unsigned char *) dest;
	while (n--)
	{
		*pdst++ = *psrc++;
	}
	return (dest);
}
