#include<stdio.h>

int	main()
{
	float	notaPrimeiraProva, notaSegundaProva, notaTerceiraProva;
	float	media;

	printf("Digite a nota da primeira prova: ");
	scanf("%f", &notaPrimeiraProva);
	printf("Digite a nota da segunda prova: ");
	scanf("%f", &notaSegundaProva);
	printf("digite a nota da terceira prova: ");
	scanf("%f", &notaTerceiraProva);
	
	media = (notaPrimeiraProva + notaSegundaProva + notaTerceiraProva) / 3;
	if( media >= 7)
	printf("Voce foi aprovado!\n");
	else if(media < 5)
	printf("Voce foi reprovado\n");
	else{
	printf("Voce está de recuperação!\n");
}
}
