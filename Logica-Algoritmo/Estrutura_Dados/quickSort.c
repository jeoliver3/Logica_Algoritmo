#include<stdio.h>

/* Ordenando números nos vetores. Em caso de dúvidas, colsultar método
Quicksort para melhor entendimento*/


int	main()
{
	int	i, j, aux;
	int	num[11];

	for(i =0; i < 10; i++)
{
	printf("Digite: %d\n",i);
	scanf("%d", &num[i]);
}


	for(i = 0; i < 10; i++){
		for(j = i; j < 10; j++){
			if(num[j] > num[i]){
			aux = num[i];
			num[i] = num[j];
			num[j] = aux;
}			

}
}
	
	for(i = 0; i < 10; i++){ 
	printf("números ordenados é: %d\n", num[i]);
}
}

