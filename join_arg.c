#include "push_swap.h"
char *join_arg(int ac, char **av)
{
    char *new_av;
    int i;

    i = 1;
    new_av = ft_strdup("");
    while(i < ac)
    {
        new_av = ft_strjoin(new_av, av[i]);
        if (i != ac -1)
            new_av = ft_strjoin(new_av, " ");
        i++;
    }
    return(new_av);
}
// int main(int argc, char **argv) {

//     char *args = join_arg(argc, argv);
//     printf("%s", args);
//     return 0;
// }