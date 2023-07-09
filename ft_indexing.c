/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_indexing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:48:56 by kmouradi          #+#    #+#             */
/*   Updated: 2023/07/09 15:52:44 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int indexof(int *arr,int val)
{
	int i = 0;
	while(val != arr[i])
	{
		i++;
		// printf("%d\n",i);
	}
	return i;
}
int * find_position(t_stack *stack)
{
	int *arr_clone = malloc(stack->size * sizeof(int));
	printf("size==>%d\n",stack->size);
	int i = 0;
	while(i <= stack->size)
	{
		arr_clone[i] = stack->arr[i];
		i++;
	}
	int j = 0;
	while(j < stack->size)
	{
		i = 0;
		while(i < stack->size)
		{
			int tmp = 0;
			if (arr_clone[j] < arr_clone[i])
			{
				tmp = arr_clone[j];
				arr_clone[j] = arr_clone[i];
				arr_clone[i] = tmp;
			}
			i++;
		}
		j++;
	}
	// i = 0;
	// while(i < stack->size)
	// {
	// 	stack->arr_index[i] = indexof(arr_clone,stack->arr[i]);
	// 	i++;
	// }
	return arr_clone;
}


void sort_100(t_stack *stack_a,t_stack *stack_b)
{
	int *arr_clone = find_position(stack_a);
	int i = 0;
	// puts("------------------------------------");
	while(i < stack_a->size)
	{
		printf("number: %d and index %d\n",stack_a->arr[i],indexof(arr_clone,stack_a->arr[i]));
		i++;
	}
	int j = 0;
	 i = -1;
	while(stack_a->top > 1)
	{
	    i = i + stack_a->size / 5;//2
		j = stack_a->top;
		printf("top  = %d",j);
		while(j)
		{
			printf("i === %d\n",i);
			printf("j ==== %d\n",j);
			if(indexof(arr_clone,stack_a->arr[stack_a->top]) <= i)
			{
				printf("stack a num: %d\n",stack_a->arr[stack_a->top]);
				printf("stack a index: %d\n",indexof(arr_clone,stack_a->arr[stack_a->top]));
			 	ft_pb(stack_a,stack_b);
			}
			else
			{
				printf("rot stack a num: %d\n",stack_a->arr[stack_a->top]);
				printf("rot stack a index: %d\n",indexof(arr_clone,stack_a->arr[stack_a->top]));
				ft_ra(stack_a);
				// continue;
			}
			j--;
		}
	// int k = 0;

	// exit(0);
	}
	printf("size of b %d\n",stack_b->top);
}