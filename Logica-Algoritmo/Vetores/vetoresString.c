#include<stdio.h>
#include<string.h>

/* Na linguegm C não tem a possibilidade de excutar diretamente strings.
Foi criado uma cadeia de caracteres com 6 posições. O scanf lê apenas até o primeiro
caracter. Já gets lê tudo até a digitação do enter. Caso use scanf, %s (string)para armazenar*/

int     main()
{
        char     vetorNomes[6];
        int     i;

        for(i = 0; i < 5; i++){
        printf("Informe o nome: ");
        gets(vetorNomes);


}
}
