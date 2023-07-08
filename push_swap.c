/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 14:41:19 by kmouradi          #+#    #+#             */
/*   Updated: 2023/07/08 19:30:41 by kmouradi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"
int arr_len(char **arr)
{
    int i = 0;
    while(arr[i])
    {
        i++;
    }
    return (i);
}

int *parsing(int ac, char **av, int *len_arr)
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
    *len_arr = arr_len(split);
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
int main(int ac, char **av)
{
    int len_arr;
   int *arr = parsing(ac,av, &len_arr);
    t_stack *stack_a = creatstack(len_arr);
    t_stack *stack_b = creatstack(len_arr);
    int i = len_arr - 1;
    while(i >= 0)
    {
       fill_stack(stack_a, arr[i]);
       i--;
    }
    find_position(stack_a);
        // ft_push(stack_a,stack_b);
     i = stack_a->top;
    //  printf("\\%d\\|\n",len_arr);
    printf("---------------\n");
   while(i >= 0)
   {
    printf("%d\n",stack_a->arr[i]);
    i--;
   }
   printf("-------------\n");
   i = stack_b->top;
    while(i >= 0)
    {
    printf("%d\n",stack_b->arr[i]);
    i--;
    }
}