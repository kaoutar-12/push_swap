#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <ctype.h>
# include <string.h>

int check_if_only_dig(char *stack_a);
char *ft_strjoin(char const *s1, char const *s2);
char **ft_split(char const *s, char c);
int ft_atoi(const char *str);
int ft_check_sort_array(int *stack_a, int len_a);
size_t ft_strlen(const char *s);
int ft_check_double(int *stack_a, int len_a);
char *join_arg(int ac, char **av);
char	*ft_strdup(const char *s1);
void pa(int *stack_b, int *stack_a, int len_b, int len_a);
void pa(int *stack_a, int *stack_b, int len_a, int len_b);
void rb(int *stack_b, int len_b);
void ra(int *stack_a, int len_a);
void rrb(int *stack_b, int len_b);
void rra(int *stack_a, int len_a);
void sa(int *stack_a ,int len_a);
void sb(int *stack_b ,int len_b);
#endif