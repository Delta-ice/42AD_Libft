/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memmove.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: abinsafw <abinsafw@student.42abudhabi.ae> #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/15 17:53:32 by abinsafw         #+#    #+#              */
/*   Updated: 2026/10/18 19:26:07 by abinsafw        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*pdst;
	const unsigned char	*psrc;

	pdst = (unsigned char *) dest;
	psrc = (const unsigned char *) src;
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		while (n--)
		{
			pdst[n] = psrc[n];
		}
	}
	else
	{
		while (n--)
		{
			*pdst++ = *psrc++;
		}
	}
	return (dest);
}
