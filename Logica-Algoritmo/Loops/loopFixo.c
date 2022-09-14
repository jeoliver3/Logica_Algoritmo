#include<stdio.h>

/* aqui, usamos variável para armazenar o input e pasaar para o incremento*/
/*dessa forma o programa fica mais ágil e pode-se ter loops fixos, de acordo com o resultado do input*/

int	i;
int	x;

int	main()
{
	printf("Digite o número para incremento: ");
	scanf("%d", &x);
	for(i = 50; i <= 100; i+=x)
	printf("%d\n", i);
}
