#include<stdio.h>

/*Calculado IMC - Indice de massa corpórea*/
/*Para calcular o IMC (peso dividido por altura ao quadrado), será utilizado o
operador ^ expoente  -que calcula a potência de um número (número vezes ele mesmo)*/
/*Para adultos, um IMC ideal está na faixa de 18,6 a 24,9*/

int	main()
{
	float	peso, altura, imc;

	printf("Qual seu peso? :");
	scanf("%f", &peso);
	printf("Qual sua altura? :");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura); 
	if(imc < 18.6)
	printf("Você está abaixo do peso\n");
	else if (imc < 24.9)
	printf("Você está com o peso ideal\n");
	else{
	printf("Você está acima do peso\n");
}
}
