#include<stdio.h>
#include<stdlib.h>
#include<string.h>

        int     opcaoMenu;
        char    clientes[6];
        char    indiceExclusao[6];
        

        void    mostrarMenu();
        void    cadastrar();
        void    pesquisar();
        void    excluir();

int     main(void)
{
	
	do
{
        mostrarMenu();
}

        while(opcaoMenu == 4);

	mostrarMenu();       
        return 0;

}        

void    mostrarMenu()
{
	printf("1- Cadastrar\n");
        printf("2- Pesquisar\n");
        printf("3 -Excluir \n");
        scanf("%d", &opcaoMenu);
	switch(opcaoMenu)
{
        case 1:
        cadastrar();
	break;
        case 2:
        pesquisar();
	break;
        case 3:
        excluir();
	break;
        default:
        	printf("opçao invalida");
}
}

void    cadastrar()
{

        int     i;

        for(i = 0; i < 5; i++){

	printf("Informe o nome: ");
        scanf("%s", &clientes[i]);

}
}

void    pesquisar(){

        char    nomePesquisar[6];
	/* variável local da função pesquisar*/
        char    clientes[6];
        int     i;
        int     indiceEncontrado = -1;
/* menos um significa um indice inválido dentro de vetores*/


        printf("Informe o nome do cliente a pesquisar:");
        scanf("%s", &nomePesquisar[i]);
        for( i = 0; i < 5; i++)
       	if(clientes[i] == nomePesquisar[i])
                {
                indiceEncontrado = i;
                }

	if(indiceEncontrado == -1 )
        {
                printf("Cliente não emcontrado\n");
        }
        else
        {
                printf("Cliente encontrado na posição:%d ", i );
        }

}

void    excluir()
{
        char    indiceExclusao[6];
	int	i;
		
        printf("informe o indice a excluir: ");
        scanf("%s", &indiceExclusao[i]);
	for( i = 0; i < 5; i++)
        if(clientes[i] == indiceExclusao[i])
	{
	}
}

