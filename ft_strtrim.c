/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strtrim.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: abinsafw <abinsafw@student.42abudhabi.ae> #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/28 19:55:13 by abinsafw         #+#    #+#              */
/*   Updated: 2026/10/28 20:52:43 by abinsafw        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_rmchar(char c, const char *str)
{
	while (*str)
		if (c == *str++)
		{
			return (1);
		}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_str;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_rmchar(s1[start], set))
		start++;
	end = 0;
	while (s1[end])
		end++;
	while (end > start && ft_rmchar(s1[end - 1], set))
		end--;
	trimmed_str = (char *) malloc(sizeof(char) * (end - start + 1));
	if (!trimmed_str)
		return (NULL);
	i = 0;
	while (start < end)
		trimmed_str[i++] = s1[start++];
	trimmed_str[i] = '\0';
	return (trimmed_str);
}
