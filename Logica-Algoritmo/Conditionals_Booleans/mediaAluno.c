#include <stdio.h>

int main()
{
	float	media_primerb;
	float	media_segunb;
	float	notaAnual;

	printf("digite sua nota do primeiro bi");
	scanf("%f", &media_primerb);
	printf("digite a nota do segundo bi");
	scanf("%f", &media_segunb);	

	notaAnual = (media_primerb + media_segunb) / 2;
	{
	if(notaAnual >= 5.0)
			
		printf("aluno aprovado\n");
	
	else
	printf("aluno reprovado\n");	

	}
}
