/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   longest_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 09:53:32 by kmouradi          #+#    #+#             */
/*   Updated: 2023/07/09 13:29:56 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "push_swap.h"
// int *put_stuck_to_arr(t_stack *stack)
// {
// 	int *arr_clone = malloc(stack->size * sizeof(int));
// 	printf("size==>%d\n",stack->size);
// 	int i = 0;
// 	while(i <= stack->size)
// 	{
// 		arr_clone[i] = stack->arr[i];
// 		i++;
// 	}
// 	return (arr_clone);
// }
// int *longest_list(t_stack)
// {
// 	arr =put_stuck_to_arr(stack);
// 	int i = 0;
// 	int j = 0;
// 	int counter = 1;
// 	int arr_len = stack->size;
// 	int *len = malloc(sizeof(int) * arr_len);
// 	int tmp = 0;
// 	while(j <= stack->size - 1)
// 	{
// 		i = j + 1;
// 		while(i <= stack->size - 1)
// 		{
// 			tmp = arr[i];
// 			if (arr[j] < tmp)
// 			{
// 				tmp = arr[i];
// 				counter++;
// 			}
// 			i++;
// 		}
// 		len[j] = counter;
// 		j++;
// 	}
// 	int k = 0;
// 	while(k <= arr_len)
// 	{
// 		printf("len==> %d\n", len[k]);
// 	}
// 	return(len);
// }