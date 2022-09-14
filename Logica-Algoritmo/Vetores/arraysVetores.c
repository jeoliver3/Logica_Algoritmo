#include<stdio.h>
#include<string.h>

int	main()
{

	int     vetorIdades[6];
	int	i;

	for(i = 0; i < 5; i++){
	printf("Informe a idade: ");
	scanf("%d", &vetorIdades[i]);	
	
	printf("%d\n", vetorIdades[i]);

}
}
