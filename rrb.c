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
void rrb(int *stack_b, int len_b)
{
    if (rev_rot(stack_b, len_b) == 1)
    {
        printf("rrb\n");
    }
    return;
}