/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:56:30 by kmouradi          #+#    #+#             */
/*   Updated: 2022/11/14 14:23:42 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)b;
	while (i < len)
	{
	ptr[i] = (unsigned char)c;
	i++;
	}
	return (b);
}
// int main ()
// {
//    int  str[3] = {1, 2, 3};

//     ft_memset(str,'X' ,9);
//     printf("%d\t%d\t%d\n", str[0],str[1],str[2]);
// }
