/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 08:44:56 by kmouradi          #+#    #+#             */
/*   Updated: 2023/07/10 09:22:35 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort2(t_stack *stack_a)
{
	if (stack_a->arr[stack_a->top] > stack_a->arr[stack_a->top - 1])
		ft_sa(stack_a);
}
