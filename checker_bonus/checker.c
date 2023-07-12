/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:23:24 by kmouradi          #+#    #+#             */
/*   Updated: 2023/07/12 09:27:32 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_checker(t_stack *stack)
{
	int	i;

	i = stack->top;
	while (i > 0)
	{
		if (stack->arr[i] > stack->arr[i - 1])
		{
			return (1);
		}
		i--;
	}
	return (0);
}

void	check_move(t_stack *stack_a, t_stack *stack_b, char *move)
{
	if (ft_strcmp(move, "sa\n") == 0)
		ft_sa(stack_a);
	else if (ft_strcmp(move, "sb\n") == 0)
		ft_sb(stack_b);
	else if (ft_strcmp(move, "ra\n") == 0)
		ft_ra(stack_a);
	else if (ft_strcmp(move, "rb\n") == 0)
		ft_rb(stack_b);
	else if (ft_strcmp(move, "rra\n") == 0)
		ft_rra(stack_a);
	else if (ft_strcmp(move, "rrb\n") == 0)
		ft_rrb(stack_b);
	else if (ft_strcmp(move, "rrr\n") == 0)
	{
		ft_rra(stack_a);
		ft_rrb(stack_b);
	}
	else if (ft_strcmp(move, "pa\n") == 0)
		ft_pa(stack_b, stack_a);
	else if (ft_strcmp(move, "pb\n") == 0)
		ft_pb(stack_a, stack_b);
	else
		print_error();
}

void	make_move(t_stack *stack_a, t_stack *stack_b)
{
	char	*move;

	while (1)
	{
		move = get_next_line(0);
		if (move == NULL)
			break ;
		check_move(stack_a, stack_b, move);
		free(move);
	}
}

void	ft_free_stack(t_stack *stack_a, t_stack *stack_b)
{
	free(stack_a->arr);
	free(stack_a);
	free(stack_b->arr);
	free(stack_b);
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
		make_move(stack_a, stack_b);
		if (ft_checker(stack_a) == 0 && is_empty(stack_b) == 1)
			ft_printf("OK\n");
		else
			ft_printf("KO\n");
		ft_free_stack(stack_a, stack_b);
		free(arr);
	}
}
