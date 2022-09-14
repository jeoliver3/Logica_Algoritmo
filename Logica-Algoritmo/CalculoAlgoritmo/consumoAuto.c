#include<stdio.h>

int	main()
{
	float	kilometragem;
	float	qtdadeLitros;
	float	mediaConsumoAuto;
	
	printf("Digite a distancia total percorrida: ");
	scanf("%f", &kilometragem);
	printf("Digite quantos litros voce gastou: ");
	scanf("%f", &qtdadeLitros);
	
	mediaConsumoAuto = kilometragem / qtdadeLitros;
	printf("Consumo médio gasto desse automóvel é de : %f", mediaConsumoAuto);

}
