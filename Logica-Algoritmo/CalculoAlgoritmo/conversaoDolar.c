#include<stdio.h>

int	main()
{
	float	valorReal;
	float	cotacaoDolar;
	float	conversao;	

	printf("Digite o valor em real: ");
	scanf("%f", &valorReal);
	printf("Digite a cotacao do dolar hoje: ");
	scanf("%f", &cotacaoDolar);
	
	conversao = valorReal * cotacaoDolar;
	printf("Valor da conversao real para dolar hoje: %.2f\n", conversao);
}
