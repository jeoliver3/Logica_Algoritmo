#include<stdio.h>

int     opcaoMenu;
int	totalConta = 0;

int	main()
{
	do
{
	printf("-----Digite 1 para troca de óleo e 2 para balanceamento--- ");
	printf("\n1 - Troca de óleo ");
	printf("\n2 - Balanceamento ");
	printf("\n3 - Sair ")	;
	scanf("%d", &opcaoMenu);
	
	if(opcaoMenu == 1)
	totalConta = totalConta + 100;
	else if (opcaoMenu == 2)
	totalConta = totalConta +70;
}	
	while(opcaoMenu != 3);	
	printf("Total da conta: %d ", totalConta);
	
}
