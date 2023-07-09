/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 18:57:01 by kmouradi          #+#    #+#             */
/*   Updated: 2023/07/09 20:35:35 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
	ft_printf("rra\n");
	ft_rev_rot(stack_a);
}

void	ft_rrb(t_stack *stack_b)
{
	ft_printf("rrb\n");
	ft_rev_rot(stack_b);
}
