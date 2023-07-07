#include "push_swap.h"

int main(int ac, char **av)
{
    int len_a;
    int i;
    int *stack_a;
    // int *stack_b;
    char *str;
    char **split;

    if (ac >= 2)
    {
        str = join_arg(ac, av);
        split = ft_split(str, ' ');
        free(str);
        len_a = 0;
        while (split[len_a] != NULL)
        {
            if (!check_if_only_dig(split[len_a]))
            {
                printf("Error1\n");
                exit(1);
            }
            len_a++;
        }
        stack_a = malloc(sizeof(int) * len_a);
        if (stack_a == NULL)
            return(0);
        i = 0;
        while(split[i] != NULL)
        {
            stack_a[i] = ft_atoi(split[i]);
            i++;
        }
        if (!ft_check_sort_array(stack_a, len_a))
        {
            printf("Error2\n");
            exit(1);
        }
        if (!ft_check_double(stack_a, len_a))
        {
            printf("Error3\n");
            exit(1);
        }
    }

    else
    {
        printf("Error4\n");
        exit(1);
    }
}
