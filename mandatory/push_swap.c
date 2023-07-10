/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 07:23:03 by kmouradi          #+#    #+#             */
/*   Updated: 2023/07/10 17:25:14 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->size == 2)
		ft_sort2(stack_a);
	else if (stack_a->size == 3)
		ft_sort3(stack_a);
	else if (stack_a->size == 4)
		ft_sort4(stack_a, stack_b);
	else if (stack_a->size == 5)
		ft_sort5(stack_a, stack_b);
	else if (stack_a->size <= 100)
		ft_sort_100(stack_a, stack_b);
	else if (stack_a->size > 100)
		ft_sort500(stack_a, stack_b);
	free (stack_a->arr);
	free (stack_a);
	free (stack_b->arr);
	free (stack_b);
}

int	main(int ac, char **av)
{
	int		len_arr;
	int		*arr;
	int		i;
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (ac >= 2)
	{
		arr = parsing(ac, av, &len_arr);
		stack_a = creatstack(len_arr);
		stack_b = creatstack(len_arr);
		i = len_arr - 1;
		while (i >= 0)
		{
			fill_stack(stack_a, arr[i]);
			i--;
		}
		ft_sort(stack_a, stack_b);
		free(arr);
	}
	else
		print_error();

}

