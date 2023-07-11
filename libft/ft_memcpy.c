/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 09:48:47 by kmouradi          #+#    #+#             */
/*   Updated: 2022/11/15 11:27:50 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst1;
	unsigned char	*src1;

	i = 0;
	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	if (dst1 == 0 && src1 == 0)
		return (0);
	while (i < n)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst);
}
// int main ()
// {
// 	char str1[20] = "kawtar";
// 	char str2[20];
//     printf ("%s\n",ft_memcpy(str2,str1,9));
// 	 printf ("%s",memcpy(str2,str1,9));
//     return (0);
// }