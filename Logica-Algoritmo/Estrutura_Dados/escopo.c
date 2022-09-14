#include<stdio.h>



int	main()
{
	void    somar(int i, int j); /*Prototipando função*/
	somar(10,20); /* Chamando função e passando valores nos parametros*/
	
}

/* dentro de chaves na função, coloco o que quero
que essa função faça*/

void   somar(int i, int j) /* variável i e j apenas da funçao local de somar*/ 

{
        int resultado;        
	resultado = i + j;
	printf("%d\n", resultado);
}


