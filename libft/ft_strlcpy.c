/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:10:27 by kmouradi          #+#    #+#             */
/*   Updated: 2022/11/14 16:08:03 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
	dst[i] = '\0';
	}
	return (ft_strlen(src));
}
// int main ()
// {
// 	char str1[20] = "kawtar";
// 	char str2[20] = "lol";
//     printf ("%zu\n",ft_strlcpy(str2,str1,9));
// 	 printf ("%zu",strlcpy(str2,str1,9));
//     return (0);
// }
