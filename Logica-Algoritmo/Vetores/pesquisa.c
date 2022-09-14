#include<stdio.h>
#include<string.h>

/* nesse código usando a variável lógica (true/false) para dar valor
a variavel encontrado. Que foi substituida por 0 e 1. Quando percorre no indice
e indice é igual pesquisa, encontrado recebe 1, entao se encontrado recebe 1
executa que foi encontrado.*/
	
	int     main()
{
	char    nomes[6];
	char    pesquisa[6];
	int     i;
	int     encontrado = 0;
	
	for(i = 0; i < 5; i++)
	{
	printf("Informe o nome que deseja cadastrar: \n");
	scanf("%s", &nomes);
	}
	printf("Informe o nome que deseja pequisar:\n ");
	scanf("%s", &pesquisa);
	        
	for(i = 0; i < 5; i++)
		if( nomes[i] == pesquisa[i])
		{
			encontrado = 1;
		}
	
		if(encontrado == 1)
		{
			printf("encontrado\n");}

		else
		{
			printf("nao encontrado\n");
		}


}
