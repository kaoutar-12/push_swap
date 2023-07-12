/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_indexing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:48:56 by kmouradi          #+#    #+#             */
/*   Updated: 2023/07/12 13:17:03 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_max_index(t_stack *s, int val)
{
	int	i;

	i = s->top;
	while (i >= 0)
	{
		if (s->arr[i] == val)
			return (i);
		i--;
	}
	return (i);
}

int	indexof(int *arr, int val)
{
	int	i;

	i = 0;
	while (val != arr[i])
	{
		i++;
	}
	return (i);
}

int	findmax(t_stack *stack)
{
	int	max;
	int	i;

	max = stack->arr[stack->top];
	i = stack->top;
	while (i >= 0)
	{
		if (max < stack->arr[i])
			max = stack->arr[i];
		i--;
	}
	return (max);
}

int	*find_position(t_stack *stack)
{
	int	*arr_clone;
	int	i;
	int	j;
	int	tmp;

	i = 0;
	arr_clone = malloc(stack->size * sizeof(int));
	if (arr_clone == NULL)
		return (0);
	tmp = 0;
	while (i <= stack->size - 1)
	{
		arr_clone[i] = stack->arr[i];
		i++;
	}
	j = -1;
	while (++j < stack->size)
	{
		i = -1;
		while (++i < stack->size)
			if (arr_clone[j] < arr_clone[i])
				ft_swap_index(&arr_clone[j], &arr_clone[i]);
	}
	return (arr_clone);
}

void	push_to_a(t_stack *a, t_stack *b)
{
	int	max;
	int	index;

	while (1)
	{
		max = findmax(b);
		index = find_max_index(b, max);
		while (b->arr[b->top] != max)
		{
			if (index >= b->top / 2)
				ft_rb(b);
			else
				ft_rrb(b);
		}
		ft_pa(b, a);
		if (b->top == -1)
			break ;
	}
}
