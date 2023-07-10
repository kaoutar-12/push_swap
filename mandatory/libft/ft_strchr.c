/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:12:22 by kmouradi          #+#    #+#             */
/*   Updated: 2022/11/14 15:40:52 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != '\0' && *str != (char)c)
		str++;
	if (*str == (char)c)
		return (str);
	else
		return (0);
}

// int main ()
// {
//     const char *s ="kawtar";
//     char c= 't';
//     printf("%s", ft_strchr(s,c));
// }
