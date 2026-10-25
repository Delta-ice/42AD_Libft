/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strncmp.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: abinsafw <abinsafw@student.42abudhabi.ae> #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/22 00:00:50 by abinsafw         #+#    #+#              */
/*   Updated: 2026/10/25 19:32:17 by abinsafw        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ps1;
	unsigned char	*ps2;
	int				sign;

	if (s1 == NULL || s2 == NULL)
		return ('\0');
	sign = 0;
	ps1 = (unsigned char *) s1;
	ps2 = (unsigned char *) s2;
	while (n > 0)
	{
		if (*ps1 != *ps2 || *ps1 == '\0' || *ps2 == '\0')
			return (*ps1 - *ps2);
		ps1++;
		ps2++;
		n--;
	}
	return (0);
}
