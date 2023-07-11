/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:19:13 by kmouradi          #+#    #+#             */
/*   Updated: 2022/11/03 14:07:49 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((n - 1) > 0 && (s1[i] == s2[i]) && s1[i])
	{
		n--;
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int main()
// {
//     char *big = "abcdef";
// 	char *little = "abcdefghijklmnop";
// 	size_t size = 6;
//     printf("Result: %d\n", ft_strncmp(big, little, size));
// 	printf("Result: %d\n", strncmp(big, little, size));
//     return (0);
// }
