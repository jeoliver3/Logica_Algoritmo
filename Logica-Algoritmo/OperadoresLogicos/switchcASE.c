#include<stdio.h>

int	main()
{
	int	voto;
	
	printf("Digite seu voto, 20 ou 30 : ");
	scanf("%d", &voto);
	
	switch(voto)
{
	case 20:
	printf("Voce votou no Verde\n");
	break;
	case 30:
	printf("Você votou no Amarelo\n");
	break;
	default:
	printf("Voto nulo\n");
		
}


}
