/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:28:35 by kmouradi          #+#    #+#             */
/*   Updated: 2022/11/15 14:30:47 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if ((haystack == 0 || needle == 0) && len == 0)
		return (0);
	while (needle[0] == '\0')
	{
		return ((char *)haystack);
	}
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len && needle[j] != '\0')
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (0);
}

// int main ()
// {
// 	char *str1 = "kawtar";
// 	char *str2 = "";
// 	printf("%s",ft_strnstr(str1,str2, 2));
// 	return(0);
// }