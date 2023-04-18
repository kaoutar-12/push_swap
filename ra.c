#include "push_swap.h"
int ft_rot(int *stack, int len) 
{
    int tmp;
    int i;
    if (len < 2) 
    {
        return (0);
    }
    else
    {
        tmp = stack[0];
        i = 0;
        while (i < len - 1)
        {
            stack[i] = stack[i+1];
            i++;
        }
        stack[len-1] = tmp;
        return (1);
    }
}
void ra(int *stack_a, int len_a)
{
    if (ft_rot(stack_a, len_a) == 1)
    {
        printf("ra\n");
    }
    return;
}
