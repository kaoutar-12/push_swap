/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 14:41:13 by kmouradi          #+#    #+#             */
/*   Updated: 2023/07/09 18:39:56 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
void find_min(t_stack *stack_a, t_stack *stack_b)
{
	if (ft_find_min_value(stack_a) == stack_a->arr[stack_a->top])
		ft_pb(stack_a, stack_b);
	if (ft_find_min_value(stack_a) == stack_a->arr[stack_a->top - 1])
	{
		ft_ra(stack_a);
		ft_pb(stack_a,stack_b);
	}
	if (ft_find_min_value(stack_a) == stack_a->arr[stack_a->top - 2])
	{
		ft_ra(stack_a);
		ft_ra(stack_a);
		ft_pb(stack_a,stack_b);
	}
	 if (ft_find_min_value(stack_a) == stack_a->arr[stack_a->top - 3])
	 {
		ft_rra(stack_a);
		ft_pb(stack_a,stack_b);
	 }
}

void ft_sort4(t_stack *stack_a, t_stack *stack_b)
{
	find_min(stack_a,stack_b);
	ft_sort3(stack_a);
	ft_pa(stack_b,stack_a);
}