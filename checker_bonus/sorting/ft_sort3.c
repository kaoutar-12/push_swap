/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:09:49 by kmouradi          #+#    #+#             */
/*   Updated: 2023/07/11 08:48:51 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	ft_sort3(t_stack *stack_a)
{
	if (stack_a->arr[stack_a->top] > stack_a->arr[stack_a->top - 1] \
		&& stack_a->arr[stack_a->top] < stack_a->arr[stack_a->top - 2])
		ft_sa(stack_a);
	else if (stack_a->arr[stack_a->top] > stack_a->arr[stack_a->top - 1] \
		&& stack_a->arr[stack_a->top - 1] > stack_a->arr[stack_a->top - 2])
	{
		ft_sa(stack_a);
		ft_rra(stack_a);
	}
	else if (stack_a->arr[stack_a->top] > stack_a->arr[stack_a->top - 1] \
		&& stack_a->arr[stack_a->top] > stack_a->arr[stack_a->top - 2] \
		&& stack_a->arr[stack_a->top - 1] < stack_a->arr[stack_a->top - 2])
		ft_ra(stack_a);
	else if (stack_a->arr[stack_a->top] < stack_a->arr[stack_a->top - 1] \
		&& stack_a->arr[stack_a->top] < stack_a->arr[stack_a->top - 2] \
		&& stack_a->arr[stack_a->top - 1] > stack_a->arr[stack_a->top - 2])
	{
		ft_sa(stack_a);
		ft_ra(stack_a);
	}
	else if (stack_a->arr[stack_a->top - 1] > stack_a->arr[stack_a->top] \
		&& stack_a->arr[stack_a->top - 1] > stack_a->arr[stack_a->top - 2] \
		&& stack_a->arr[stack_a->top] > stack_a->arr[stack_a->top - 2])
		ft_rra(stack_a);
}
