#include<stdio.h>
#include<string.h>

int     main()
{
        char    nomes[6];
        char	pesquisa[6];
	int     i;
	int     encontrado  = 0;

        for(i = 0; i < 5; i++){
        printf("Informe o nome que deseja cadastrar: ");
        gets(nomes);
}
	printf("Informe o nome que deseja pequisar: ");
	gets(pesquisa);		       
	
	for(i = 0; i < 5; i++)
{
		if( nomes[i] == pesquisa[i])
	{
		encontrado = 1;
	}	
	
}
	
	if(encontrado == 1)
{
	printf("encontrado\n");
}

	else
{
	printf("nao encontrado\n");
}

}

