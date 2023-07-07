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
        system("leaks push_swap");
        free(str);
        split = ft_split(str, ' ');
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
int main(int ac, char **av)
{
   int *arr = parsing(ac,av);
   int i = 0;
   while(arr[i])
   {
    printf("%d\n",arr[i]);
    i++;
   }
//    int	j;

// 	j = 0;
// 	while (arr[j])
// 	{
// 		free(arr[j]);
// 		j++;
// 	}
	free (arr);

}