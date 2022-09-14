#include<stdio.h>

/*"do while", diferente do "while", primeiro executa, depois verifica. Nesse código abaixo, ele executa primeiro (do), depois entra na condição, de se para de executar ou o quantas vezes executa mais. Em "while", primeiro ele verifica, depois executa e entra no laço. Em "do while" antes mesmo de verificar e entrar no laço, roda uma vez o código*/

int	num = 100;

int	main() 
{
	do
{
	printf("Hello World\n");
	num++;
}	
	while(num < 10);
}
