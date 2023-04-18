#include "push_swap.h"
int push(int *stack_a, int *stack_b, int len_a, int len_b) {
    // Check if stack_a is empty
    if (len_a == 0)
    {
        return 0;
    }
    else
    {
        // len dyal stack jdid
        int new_len_b = len_b +1;
        // allocate for a new stack li ghadi tkon fih zayda whda
        int *new_b = malloc(sizeof(int) * new_len_b);
        // db ghadi nhezo hadshi li f stack_b onhtoh f stack jdid
        int i = 0;
        while(i < len_b)
        {
            new_b[i] = stack_b[i];
            i++;
        }

        // nheto fhadik li zedna 0 bash maykkhrjch lina chi mochkil wakha ma3arfash wash ghadi ykhrk ola la mhm anyway
        new_b[new_len_b] = 0;
        // db asidi ghadi nshifttiw hadshi bash nkhliw top khawi
        // tell que lblasa lkhera 3ndna fiha 0 donc hsn nbdaw mn lkher 
        int j = new_len_b - 1;
        // sf db had loop ghadi tbqa thet kola valeur fl blasa li moraha
        while(j > 0)
        {
            new_b[j] = new_b[j - 1];
            j--;
        }
        // bghit nhet 0 flwel dyal stack bghit osf
        new_b[0] = 0;
        // db ghadi njibo hadi lvaleur lwela li f stack_a onhtoha 
        new_b[0] = stack_a[0];
        // db khasna nshifttiw hadak stack_a bash y3mer lfouq
        int k = 1;
        while(k < len_a)
        {
            stack_a[k -1] = stack_a[k];
            k++;
        }
        stack_a[len_a]= ' ';
        // db hta ma3rft mandir knt bagha ndir 0 flblasa li bqat khawya flkher 
        // ma tfkert fash qal lia bli yqder ykon 0 mn les valeurs likhdamin bihom
        // so fktert ghadi nkhlliha hakak khawya cuz asln ghadi nredo kolshi lih flkher
        printf("\n");
        int l = 0;
        while(l< new_len_b)
        {
        printf("%d ",new_b[l]);
        l++;
        }
        printf("\n");
        int n= 0;
        while(n < len_a)
        {
            printf("%d ",stack_a[n]);
            n++;
        }
        printf("\n");
        return(1);
    }
}
void pb(int *stack_b, int *stack_a, int len_b, int len_a)
{
    if (push( stack_b,  stack_a,  len_b,  len_a))
    {
        printf("pb\n");
    }
    return;
}