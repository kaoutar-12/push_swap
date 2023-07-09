/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 14:16:07 by kmouradi          #+#    #+#             */
/*   Updated: 2023/07/09 20:42:50 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_find_min_value(t_stack *stack)
{
	int	tmp;
	int	i;

	i = stack->top;
	tmp = stack->arr[stack->top];
	while (i >= 0)
	{
		if (stack->arr[i] < tmp)
			tmp = stack->arr[i];
		i--;
	}
	return (tmp);
}

int	ft_find_min_indice(t_stack *stack)
{
	int	tmp;
	int	i;
	int	ret;

	tmp = stack->arr[stack->top];
	i = stack->top;
	ret = 0;
	while (i >= 0)
	{
		if (stack->arr[i] < tmp)
		{
			ret = i;
			tmp = stack->arr[i];
		}
		i--;
	}
	return (ret);
}
