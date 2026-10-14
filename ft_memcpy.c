/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abinsafw <abinsafw@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 18:40:12 by abinsafw          #+#    #+#             */
/*   Updated: 2026/10/14 19:37:41 by abinsafw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*psrc;
	unsigned char	*pdst;
	int				i;

	i = 0;
	if (!dest && !src)
	{
		return (NULL);
	}
	psrc = (unsigned char *) src;
	pdst = (unsigned char *) dest;
	while (n--)
	{
		*pdst++ = *psrc++;
	}
	return (dest);
}
