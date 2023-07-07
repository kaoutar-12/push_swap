/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 20:49:02 by kmouradi          #+#    #+#             */
/*   Updated: 2023/07/07 21:07:39 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
void ft_push(t_stack *stack1, t_stack *stack2)
{
	if (stack1->top == -1) return;
	stack2->arr[++stack2->top] = stack1->arr[stack1->top--];
}