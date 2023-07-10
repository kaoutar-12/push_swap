/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_intmax.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 10:16:34 by kmouradi          #+#    #+#             */
/*   Updated: 2023/07/10 10:28:03 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_intmax(int *arr, int len)
{
	int	i;
	int	max;

	i = 0;
	max = INT_MAX;
	while (i < len - 1)
	{
		if (arr[i] > max)
			return (1);
		i++;
	}
	return (0);
}
