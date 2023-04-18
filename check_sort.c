#include "push_swap.h"
int ft_check_sort_array(int *stack_a, int len_a)
{
    int i = 0;
    while(i < len_a - 1)
    {
        if (stack_a[i] > stack_a[i + 1])
            return 1;
        i++;
    }
    return 0;
}
