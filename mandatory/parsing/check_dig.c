/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dig.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 14:41:48 by kmouradi          #+#    #+#             */
/*   Updated: 2023/07/12 10:22:35 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_if_only_dig(char *stack_a)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	if (stack_a[i] == '-' && ft_isdigit(stack_a[i + 1]))
	{
		sign *= -1;
		i++;
	}
	else if (stack_a[i] == '+' && ft_isdigit(stack_a[i + 1]))
	{
		i++;
	}
	while (stack_a[i])
	{
		if (stack_a[i] < '0' || stack_a[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
