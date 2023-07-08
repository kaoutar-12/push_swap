#include "push_swap.h"

int *parsing(int ac, char **av)
{
    int len_a;
    int i;
    int *arr;
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
        arr = malloc(sizeof(int) * len_a);
        if (arr == NULL)
            return(0);
        i = 0;
        while(split[i] != NULL)
        {
            arr[i] = ft_atoi(split[i]);
            i++;
        }
        if (!ft_check_sort_array(arr, len_a))
        {
            printf("Error2\n");
            exit(1);
        }
        if (!ft_check_double(arr, len_a))
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
        int	j;

        j = 0;
        while (split[j])
        {
            free(split[j]);
            j++;
        }
	free (split);
    return (arr);
}
int arr_len(int *arr)
{
    int i = 0;
    while(arr[i])
    {
        i++;
    }
    return (i);
}
int main(int ac, char **av)
{
   int *arr = parsing(ac,av);
    int len_arr = arr_len(arr);
    t_stack *stack = creatstack(len_arr);
    int i = len_arr - 1;
    while(i >= 0)
    {
       fill_stack(stack, arr[i]);
       i--;
    }
    ft_sort3(stack);
     i = arr_len(arr) - 1;
   while(i >= 0)
   {
    printf("%d\n",stack->arr[i]);
    i--;
   }
}