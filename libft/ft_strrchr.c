/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:43:09 by kmouradi          #+#    #+#             */
/*   Updated: 2022/11/08 10:08:48 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	a;
	char	*str;

	str = (char *)s;
	a = c;
	i = ft_strlen(s);
	while (i > 0 && s[i] != a)
	i--;
	if (s[i] == a)
		return (str + i);
	else
		return (0);
}

// int main ()
// {
//     const char *s ="jakahajzlakjijz";
//     char c= 'i';
//     printf("%s", ft_strrchr(s,c));
// }
