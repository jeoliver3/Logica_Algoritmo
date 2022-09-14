#include<stdio.h>
int	main()
{
	int	i = 10;
	int	j = 22;
	
	if(i == 10 && j == 20)
	printf("Fazer algo\n");
 	else{
	printf("Não faz nada\n");	
}
}
/* i == 10 (TRUE) j == 20 (TRUE)*/
/* primeira condição satisteita, true, executa. Caso contrário, executa a próxima*/
/*operador &&, se encontrar um false, para de executar. Operador || se encontrar um verdadeira, satisfaz e para de executar*/
