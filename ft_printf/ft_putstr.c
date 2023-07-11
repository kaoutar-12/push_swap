/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 10:12:42 by kmouradi          #+#    #+#             */
/*   Updated: 2022/12/06 11:06:32 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *len)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		ft_putstr("(null)", len);
	}
	if (s != NULL)
	{
		while (s[i] != '\0')
		{
			ft_putchar(s[i], len);
			i++;
		}
	}
}

// int main ()
// {
// 	int len;
// 	len = 0;
// 	ft_putstr(NULL, &len);
// 	printf("\n%d",len);
// }