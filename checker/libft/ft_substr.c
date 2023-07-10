/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:22:13 by kmouradi          #+#    #+#             */
/*   Updated: 2022/11/15 16:57:56 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	size;
	size_t	nl;

	if (!s)
		return (0);
	if (start >= ft_strlen(s) || !len)
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size <= len)
		nl = size;
	else
		nl = len;
	str = malloc(sizeof(char) * (nl + 1));
	if (!str)
		return (0);
	i = 0;
	while (i < nl)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
