/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:01:20 by kmouradi          #+#    #+#             */
/*   Updated: 2022/11/15 11:26:01 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	b;

	i = 0;
	ptr = (unsigned char *)s;
	b = (unsigned char )c;
	while (i < n)
	{
		if (ptr[i] == b)
			return ((void *)ptr + i);
		i++;
	}
	return (0);
}
// int main (){
// 	int s[] = {22616};
// 	printf("%d", ft_memchr(s,'X', 9));
// }