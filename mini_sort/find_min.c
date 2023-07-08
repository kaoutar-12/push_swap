/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 14:16:07 by kmouradi          #+#    #+#             */
/*   Updated: 2023/07/08 17:46:02 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
int ft_find_min_value(t_stack *stack)
{
	int tmp = stack->arr[stack->top];
	int i = stack->top;
	// printf("top%d\n",stack->top);
	while(i >= 0)
	{
		// printf("00 %d\n",stack->arr[i]);
		if (stack->arr[i] < tmp)
			tmp = stack->arr[i];
		i--;
	}
		// printf("min value %d\n",tmp);
	return(tmp);
}

int ft_find_min_indice(t_stack *stack)
{
	int tmp = stack->arr[stack->top];
	int i = stack->top;
	int ret = 0;
	while(i >= 0)
	{
		if (stack->arr[i] < tmp){
			ret = i;
			tmp = stack->arr[i];
		}
		i--;
	}
	// printf("min indice %d\n",i);
	return(ret);
}