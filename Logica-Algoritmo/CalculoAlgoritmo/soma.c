#include<stdio.h>

int     main()
{
        int     primeiroNumero;
        int     segundoNumero;
        int     somaDosNumeros;

        printf("Digite o primeiro numero: ");
        scanf("%d", &primeiroNumero);
        printf("Digite o segundo numero: ");
        scanf("%d", &segundoNumero);

        somaDosNumeros = primeiroNumero + segundoNumero;
        printf("A soma dos numeros é: %d\n", somaDosNumeros);


}
