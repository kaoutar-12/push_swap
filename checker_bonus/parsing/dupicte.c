/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dupicte.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 14:41:40 by kmouradi          #+#    #+#             */
/*   Updated: 2023/07/11 08:48:27 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

int	ft_check_double(int *stack_a, int len_a)
{
	int	i;
	int	j;

	i = 0;
	while (i < len_a)
	{
		j = i + 1;
		while (j < len_a)
		{
			if (stack_a[i] == stack_a[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}
