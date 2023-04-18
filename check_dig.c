#include "push_swap.h"

int check_if_only_dig(char *stack_a)
{
    int i;
    int sign;

    i = 0;
    sign = 1;

    if (stack_a[i] == '-')
    {
        sign *= -1;
        i++;
    }
    else if (stack_a[i] == '+')
    {
        i++;
    }
    while(stack_a[i])
    {
        if (stack_a[i] < '0' || stack_a[i] > '9')
        {
            return (0);
        }
        i++;
    }
    return (1);
}
