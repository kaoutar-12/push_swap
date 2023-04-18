#include "push_swap.h"
int swap(int *stack, int len)
{
    int tmp;
    if (len < 2)
    {
        return (0);
    }
    else
    {
        tmp = stack[0];
        stack[0] = stack[1];
        stack[1] = tmp;
        return (1);
    }
}
void sa(int *stack_b ,int len)
{
    if (swap(stack_b, len) == 1)
    {
        printf("sb\n");
    }
    return;
}
