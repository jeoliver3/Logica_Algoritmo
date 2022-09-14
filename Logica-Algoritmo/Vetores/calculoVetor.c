#include<stdio.h>
#include<stdlib.h>

int	main()
{
	int	num1[5];
	int	num2[5];
	int	num3[5];
	int	i;
	int	result;

	for(i = 0; i < 5; i++)
{
	printf("-1a Digite %d:", i);
	scanf("%d", &num1[i]);
}
        for(i = 0; i < 5; i++)
{
        printf("-2a Digite %d:", i);
        scanf("%d", &num2[i]);
}
	printf("Digite 1 para Soma \n");
	printf("Digite 2 Subtracao \n");
	scanf("%d",&result);
	
	if( result == 1)
{
	for(i = 0; i < 5; i++)
	num3[i] = num1[i] + num2[i];
}	
	else if(result == 2)
{
	for(i = 0; i < 5; i++)
        num3[i] = num1[i] - num2[i];
}
	for(i = 0; i < 5; i++)
{
	printf("Resultado é: %d\n", num3[i]);
}
}
