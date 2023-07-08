/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_indexing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:48:56 by kmouradi          #+#    #+#             */
/*   Updated: 2023/07/08 19:38:17 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void find_position(t_stack *stack)
{
	int *arr_clone = malloc(stack->size * sizeof(int));
	printf("size==>%d\n",stack->size);
	int i = stack->size;
	while(i)
	{
		arr_clone[i] = stack->arr[i];
		i++;
	}
	i =stack->top;
	while(arr_clone[i])
	{
		printf("clone %d\n",arr_clone[i]);
		i--;
	}
}