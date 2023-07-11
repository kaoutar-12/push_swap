/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 10:08:46 by kmouradi          #+#    #+#             */
/*   Updated: 2022/12/03 17:57:56 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *len)
{
	write (1, &c, 1);
	*len += 1;
}
// int main ()
// {
// 	int len;
// 	len = 0;
// 	ft_putchar('a', &len);
// 	printf("\n%d",len);
// }
