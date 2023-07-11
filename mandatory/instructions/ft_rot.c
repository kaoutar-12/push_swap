/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 18:38:03 by kmouradi          #+#    #+#             */
/*   Updated: 2023/07/11 10:14:31 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rot(t_stack *stack)
{
	int	tmp;
	int	i;

	i = stack->top;
	tmp = stack->arr[stack->top];
	while (i)
	{
		stack->arr[i] = stack->arr[i - 1];
		i--;
	}
	stack->arr[0] = tmp;
}

void	ft_ra(t_stack *stack_a)
{
	ft_printf("ra\n");
	ft_rot(stack_a);
}

void	ft_rb(t_stack *stack_b)
{
	ft_printf("rb\n");
	ft_rot(stack_b);
}

void	ft_rr(t_stack *stack_a, t_stack *stack_b)
{
	ft_printf("rr\n");
	ft_rot(stack_a);
	ft_rot(stack_b);
}
