#include <unistd.h>

int check_if_only_dig(char *av)
{
    int i;
    int sign;

    i = 0;
    sign = 1;

    if (av[i] == '-')
    {
        sign *= -1;
        i++;
    }
    else if (av[i] == '+')
    {
        i++;
    }
    while(av[i])
    {
        if (av[i] < '0' || av[i] > '9')
            return (0);
        i++;
    }
    return (1);
}