#include<stdio.h>
#include<stdlib.h>

int	main(){

	int     num[11];
	int	numReverso;
        int     i;
	int	aux = 9;

        for(i = 0; i < 10; i++)
{
        printf("Digite %d:\n", i);
	scanf("%d", &num[i]);
}

	for(i = 0; i < 10; i++){
		numReverso = num[i];
		num[i] = num[aux];
		num[aux] = numReverso;
		aux--;	
		printf("%d", num[i]);
}

}

