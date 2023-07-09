/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:09:49 by kmouradi          #+#    #+#             */
/*   Updated: 2023/07/09 20:50:12 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort3(t_stack *stack)
{
	if (stack->arr[stack->top] > stack->arr[stack->top - 1] \
		&& stack->arr[stack->top] < stack->arr[stack->top - 2])
		ft_sa(stack);
	else if (stack->arr[stack->top] > stack->arr[stack->top - 1] \
		&& stack->arr[stack->top - 1] > stack->arr[stack->top - 2])
	{
		ft_sa(stack);
		ft_rra(stack);
	}
	else if (stack->arr[stack->top] > stack->arr[stack->top - 1] \
		&& stack->arr[stack->top] > stack->arr[stack->top - 2] \
		&& stack->arr[stack->top - 1] < stack->arr[stack->top - 2])
		ft_ra(stack);
	else if (stack->arr[stack->top] < stack->arr[stack->top - 1] \
		&& stack->arr[stack->top] < stack->arr[stack->top - 2] \
		&& stack->arr[stack->top - 1] > stack->arr[stack->top - 2])
	{
		ft_sa(stack);
		ft_ra(stack);
	}
	else if (stack->arr[stack->top - 1] > stack->arr[stack->top] \
		&& stack->arr[stack->top - 1] > stack->arr[stack->top - 2] \
		&& stack->arr[stack->top] > stack->arr[stack->top - 2])
		ft_rra(stack);
}
