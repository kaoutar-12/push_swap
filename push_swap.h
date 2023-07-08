#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <ctype.h>
# include <string.h>
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

typedef struct s_stack{
	int	*arr;
	int	top;
	int	size;
} t_stack;


int check_if_only_dig(char *stack_a);
int ft_check_sort_array(int *stack_a, int len_a);
int ft_check_double(int *stack_a, int len_a);
char *join_arg(int ac, char **av);
void ft_swap(t_stack *stack);
void ft_sa(t_stack *stack_a);
void ft_sb(t_stack *stack_b);
t_stack *creatstack(unsigned int arr_len);
int is_full(t_stack *stack);
int is_empty(t_stack *stack);
void fill_stack(t_stack *stack, int number);
void ft_push(t_stack *stack1, t_stack *stack2);
void ft_pb(t_stack *stack_a,t_stack *stack_b);
void ft_pa(t_stack *stack_b,t_stack *stack_a);
void ft_rev_rot(t_stack *stack);
void ft_rot(t_stack *stack);
void ft_rev_rot(t_stack *stack);
void ft_ra(t_stack *stack_a);
void ft_rb(t_stack *stack_b);
void ft_rra(t_stack *stack_a);
void ft_rrb(t_stack *stack_b);
void ft_sort3(t_stack *stack);

#endif