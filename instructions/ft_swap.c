/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:32:52 by kmouradi          #+#    #+#             */
/*   Updated: 2023/07/09 20:38:03 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap(t_stack *stack)
{
	int	tmp;

	if (stack->top >= 2)
	{
		tmp = stack->arr[stack->top];
		stack->arr[stack->top] = stack->arr[stack->top - 1];
		stack->arr[stack->top - 1] = tmp;
	}
}

void	ft_sa(t_stack *stack_a)
{
	ft_printf("sa\n");
	ft_swap(stack_a);
}

void	ft_sb(t_stack *stack_b)
{
	ft_printf("sb\n");
	ft_swap(stack_b);
}
