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
#endif