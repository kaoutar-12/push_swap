/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort100.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 07:26:55 by kmouradi          #+#    #+#             */
<<<<<<< HEAD:sorting/ft_sort100.c
/*   Updated: 2023/07/10 14:29:39 by kmouradi         ###   ########.fr       */
=======
/*   Updated: 2023/07/10 19:59:34 by kmouradi         ###   ########.fr       */
>>>>>>> Ongoing:checker/sorting/ft_sort100.c
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_100(t_stack *stack_a, t_stack *stack_b)
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
	free(arr_clone);
}
