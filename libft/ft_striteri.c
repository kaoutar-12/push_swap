/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 09:42:41 by kmouradi          #+#    #+#             */
/*   Updated: 2022/10/31 09:42:41 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libc.h"

// void	change(unsigned int i, char *str)
// {
// 	i = 0;
// 	str[i] = str[i] + 1;
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// int main(){
// 	char str[]= "hello";
// 	// void(*f)(unsigned int, char *) = change;
// 	ft_striteri(str, change);

// 	printf("%s", str);
// }