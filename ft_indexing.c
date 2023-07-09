/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_indexing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:48:56 by kmouradi          #+#    #+#             */
/*   Updated: 2023/07/09 21:28:28 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

	arr_clone = malloc(stack->size * sizeof(int));
	if (arr_clone == NULL)
		return (0);
	tmp = 0;
	while (i <= stack->size)
	{
		arr_clone[i] = stack->arr[i];
		i++;
	}
	j = -1;
	while (++j < stack->size)
	{
		i = -1;
		while (++i < stack->size)
		{
			if (arr_clone[j] < arr_clone[i])
			{
				tmp = arr_clone[j];
				arr_clone[j] = arr_clone[i];
				arr_clone[i] = tmp;
			}
		}
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

void	sort_100(t_stack *stack_a, t_stack *stack_b)
{
	int	*arr_clone;
	int	i;
	int	j;

	arr_clone = find_position(stack_a);
	i = 0;
	j = 0;
	i = -1;
	while (stack_a->top != 0)
	{
		i = i + stack_a->size / 5;
		j = stack_a->top;
		while (j)
		{
			if (indexof(arr_clone, stack_a->arr[stack_a->top]) <= i)
				ft_pb(stack_a, stack_b);
			else
				ft_ra(stack_a);
			j--;
		}
	}
	ft_pb(stack_a, stack_b);
	push_to_a(stack_a, stack_b);
}

void	ft_sort(t_stack *stack_a, t_stack *stack_b)
{
	int	*arr_clone;
	int	i;
	int	j;

	arr_clone = find_position(stack_a);
	i = 0;
	j = 0;
	i = -1;
	while (stack_a->top != 0)
	{
		i = i + stack_a->size / 9;
		j = stack_a->top;
		while (j)
		{
			if (indexof(arr_clone, stack_a->arr[stack_a->top]) <= i)
				ft_pb(stack_a, stack_b);
			else
				ft_ra(stack_a);
			j--;
		}
	}
	ft_pb(stack_a, stack_b);
	push_to_a(stack_a, stack_b);
}
