/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 20:49:02 by kmouradi          #+#    #+#             */
/*   Updated: 2023/07/08 15:46:57 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
void ft_push(t_stack *stack1, t_stack *stack2)
{
	if (stack1->top == -1) return;
	stack2->top++;
	stack2->arr[stack2->top] = stack1->arr[stack1->top];
	stack1->top--;
}
void ft_pb(t_stack *stack_a,t_stack *stack_b)
{
	ft_printf("pb\n");
	ft_push(stack_a, stack_b);
}

void ft_pa(t_stack *stack_b,t_stack *stack_a)
{
	ft_printf("pa\n");
	ft_push(stack_b, stack_a);
}