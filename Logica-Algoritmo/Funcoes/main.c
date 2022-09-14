#include<stdio.h>
#include<stdlib.h>
#include<string.h>

        int     opcaoMenu;
        char    clientes[6];
        char    indiceExclusao[6];
        char    nomePesquisar[6];

        void    mostrarMenu();
        void    cadastrar();
        void    pesquisar();
        void    excluir();

int     main(void)
{
        mostrarMenu();
        cadastrar();
        pesquisar();
        excluir();
        return 0;
}
        
