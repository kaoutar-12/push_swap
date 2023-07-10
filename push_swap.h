/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 14:41:26 by kmouradi          #+#    #+#             */
/*   Updated: 2023/07/10 14:26:42 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <ctype.h>
# include <string.h>
# include <limits.h>
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

typedef struct s_stack{
	int	*arr;
	int	top;
	int	size;
}	t_stack;

int		check_if_only_dig(char *stack_a);
int		ft_check_sort_array(int *stack_a, int len_a);
int		ft_check_double(int *stack_a, int len_a);
char	*join_arg(int ac, char **av);
void	ft_swap(t_stack *stack);
void	ft_sa(t_stack *stack_a);
void	ft_sb(t_stack *stack_b);
t_stack	*creatstack(unsigned int arr_len);
int		is_full(t_stack *stack);
int		is_empty(t_stack *stack);
void	fill_stack(t_stack *stack, int number);
void	ft_push(t_stack *stack1, t_stack *stack2);
void	ft_pb(t_stack *stack_a, t_stack *stack_b);
void	ft_pa(t_stack *stack_b, t_stack *stack_a);
void	ft_rev_rot(t_stack *stack);
void	ft_rot(t_stack *stack);
void	ft_rev_rot(t_stack *stack);
void	ft_ra(t_stack *stack_a);
void	ft_rb(t_stack *stack_b);
void	ft_rra(t_stack *stack_a);
void	ft_rrb(t_stack *stack_b);
void	ft_sort3(t_stack *stack_a);
int		ft_find_min_indice(t_stack *stack);
int		ft_find_min_value(t_stack *stack);
void	find_min(t_stack *stack_a, t_stack *stack_b);
void	ft_sort4(t_stack *stack_a, t_stack *stack_b);
void	ft_sort5(t_stack *stack_a, t_stack *stack_b);
int		*find_position(t_stack *stack);
void	ft_sort_100(t_stack *stack_a, t_stack *stack_b);
void	push_to_a(t_stack *a, t_stack *b);
void	ft_sort500(t_stack *stack_a, t_stack *stack_b);
int		*parsing(int ac, char **av, int *len_arr);
int		find_max_index(t_stack *s, int val);
int		indexof(int *arr, int val);
int		findmax(t_stack *stack);
int		*find_position(t_stack *stack);
void	push_to_a(t_stack *a, t_stack *b);
void	ft_sort2(t_stack *stack_a);
void	print_error(void);
int		ft_check_intmax(char *arr);
void	ft_swap_index(int *a, int *b);

#endif