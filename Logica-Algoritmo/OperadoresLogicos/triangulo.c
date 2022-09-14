#include<stdio.h>

int	main()
{
	float	lado1, lado2, lado3;

	printf("Qual o lado 1: ");
	scanf("%f", &lado1);
	printf("Qual o lado 2: ");
	scanf("%f", &lado2);
	printf("Qual o lado 3: ");
	scanf("%f", &lado3);

/*Fazendo verificação, para retornar um booleano*/

	if(lado1 > lado2 + lado3 || lado2 > lado1 + lado3)
		printf("Não é um triângulo\n");
		else if( lado1 == lado2 && lado2 == lado3)
		printf("É um triângulo equilátero\n");
		else if(lado1 == lado2 || lado2 == lado3 || lado3 == lado1)
		printf("É um triângulo isósceles\n");
		else{
		printf("É um triângulo escaleno\n");
}
}
