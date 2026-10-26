/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_calloc.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: abinsafw <abinsafw@student.42abudhabi.ae> #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/26 20:57:35 by abinsafw         #+#    #+#              */
/*   Updated: 2026/10/26 21:22:47 by abinsafw        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*p;
	size_t	sum;

	sum = n * size;
	if (!sum)
		return (NULL);
	p = (void *) malloc(sum);
	if (!p)
		return (NULL);
	ft_bzero(p, sum);
	return (p);
}
