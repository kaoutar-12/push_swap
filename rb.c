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
void rb(int *stack_b, int len_b)
{
    if (ft_rot(stack_b, len_b) == 1)
    {
        printf("rb\n");
    }
    return;
}
