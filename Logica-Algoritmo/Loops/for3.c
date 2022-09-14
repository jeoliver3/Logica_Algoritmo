#include<stdio.h>

/* Nesse exemplo, laço "for", executa apenas números pares de 20 a 40 como foi
determinado na condição, porém com o incremento de 2 e não de 1, ou seja, o contador percorre de dois em dois*/

int     i;

int     main()
{
        for(i = 20; i <= 40; i+=2)
        printf("%d\n", i);

}
