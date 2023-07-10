/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:23:24 by kmouradi          #+#    #+#             */
/*   Updated: 2023/07/10 17:46:17 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checker(t_stack *stack)
{
	int i;

	i = stack->top;
	while (i > 0)
	{
		if (stack->arr[i] > stack->arr[i + 1])
			return(1);
		i--;
	}
	return (0);
}

void	check_move(t_stack *stack_a, t_stack *stack_b, char *move)
{
	if ()
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
		while(1)
		{

		}
		if (ft_checker(stack_a) == 1)
			printf("OK\n");
		else
			printf("KO\n");
	}
}