/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 08:20:35 by kmouradi          #+#    #+#             */
/*   Updated: 2023/07/10 14:30:09 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*creatstack(unsigned int arr_len)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (stack == NULL)
		return (0);
	stack->size = arr_len;
	stack->top = -1;
	stack->arr = (int *)malloc(stack->size * sizeof(int));
	if (stack->arr == NULL)
		return (0);
	return (stack);
}

int	is_full(t_stack *stack)
{
	return (stack->top == stack->size - 1);
}

int	is_empty(t_stack *stack)
{
	return (stack->top == -1);
}

void	fill_stack(t_stack *stack, int number)
{
	if (is_full(stack))
		return ;
	stack->arr[++stack->top] = number;
}
