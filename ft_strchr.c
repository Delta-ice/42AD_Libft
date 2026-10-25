/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: abinsafw <abinsafw@student.42abudhabi.ae> #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/18 22:44:01 by abinsafw         #+#    #+#              */
/*   Updated: 2026/10/18 23:05:27 by abinsafw        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (s++)
	{
		if (*s == c)
			return ((char *) s);
	}
	return (NULL);
}
