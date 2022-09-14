#include <stdio.h>

int main()
{
	float	nota1;
	float	nota2;
	float	notaFinal;

	printf("digite a primeira nota: ");
	scanf("%f", &nota1);
	printf("digite a segunda nota: ");
	scanf("%f", &nota2);
	
	notaFinal = (nota1 + nota2) / 2;
{
	if (notaFinal >= 7)
	printf("aprovado\n");
	else if ( notaFinal >= 5 && notaFinal < 7)
	printf("recuperacao\n");
	else
	printf( "reprovado\n");
}
}

