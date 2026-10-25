/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_atoi.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: abinsafw <abinsafw@student.42abudhabi.ae> #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/26 00:26:54 by abinsafw         #+#    #+#              */
/*   Updated: 2026/10/26 00:54:07 by abinsafw        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	res;

	sign = 1;
	res = 0;
	while (*nptr == ' ' && *nptr >= 7 && *nptr <= 13)
	{
		nptr++;
	}
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
		{
			sign = -sign;
		}
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		res = 10 * res + (*nptr - '0');
		nptr++;
	}
	return (sign * res);
}
