
#include "push_swap.h"
int ft_check_double(int *stack_a, int len_a)
{
    int i = 0;
    while (i < len_a)
    {
        int j = i + 1;
        while (j < len_a)
        {
            if (stack_a[i] == stack_a[j])
            {
                return 0;
            }
            j++;
        }
        i++;
    }
    return 1;
}
