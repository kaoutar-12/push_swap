/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 09:49:41 by kmouradi          #+#    #+#             */
/*   Updated: 2022/10/31 09:49:41 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	n_size(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*to_char(char *x, unsigned int nb, int len)
{
	x[len] = '\0';
	len = len - 1;
	while (nb > 0)
	{
		x[len] = (nb % 10) + 48;
		nb = nb / 10;
		len--;
	}
	return (x);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;
	int		nb;

	sign = 1;
	len = n_size(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == 0)
		return (0);
	if (n == 0)
	{
		str[0] = '0';
	}
	if (n < 0)
	{
		sign *= -1;
		nb = n * -1;
		str[0] = '-';
	}
	else
		nb = n;
	str = to_char(str, nb, len);
	return (str);
}
