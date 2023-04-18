#include "push_swap.h"

int rev_rot(int *stack, int len) {
    if (len < 2) {
        return 0;
    }
    else {
        int tmp = stack[len-1];
        int i = len - 1;
        while (i > 0) {
            stack[i] = stack[i-1];
            i--;
        }
        stack[0] = tmp;
        return 1;
    }
}
void rra(int *stack_a, int len_a)
{
    if (rev_rot(stack_a, len_a) == 1)
    {
        printf("rra\n");
    }
    return;
}
