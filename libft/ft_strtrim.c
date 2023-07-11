/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:26:01 by kmouradi          #+#    #+#             */
/*   Updated: 2022/11/17 16:44:26 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	last;
	size_t	i;
	char	*str;

	start = 0;
	if (!s1 || !set)
		return (0);
	while (s1[start] && ft_char(s1[start], set))
		start++;
	last = ft_strlen(s1);
	while (last > start && ft_char (s1[last - 1], set))
		last--;
	str = (char *)malloc(sizeof(char) * (last - start + 1));
	if (!str)
		return (0);
	i = 0;
	while (start < last)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}
