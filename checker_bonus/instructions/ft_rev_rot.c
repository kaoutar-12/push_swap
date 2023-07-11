/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 18:57:01 by kmouradi          #+#    #+#             */
/*   Updated: 2023/07/11 09:12:21 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	ft_rev_rot(t_stack *stack)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = stack->arr[0];
	while (i <= stack->top)
	{
		stack->arr[i] = stack->arr[i + 1];
		i++;
	}
	stack->arr[stack->top] = tmp;
}

void	ft_rra(t_stack *stack_a)
{
	ft_rev_rot(stack_a);
}

void	ft_rrb(t_stack *stack_b)
{
	ft_rev_rot(stack_b);
}

void ft_rrr(t_stack *stack_a, t_stack *stack_b)
{
	ft_rev_rot(stack_a);
	ft_rev_rot(stack_b);
}