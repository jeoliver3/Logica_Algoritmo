#include<stdio.h>

/*Exercício Condicinais.
Radar, limite de velocidade, para informar ao usuário, se foi ultrapassado o limite de velocidade e uma possível multa e pontos na carteira.
Variável veloLeve recebe 50 e mais 1.1 que  dá um acréscimo de 10% como tolerância no limite de velocidade.
*/

int     main()
{
        int     veloVeiculo, veloLeve, veloMedia, veloGrave, veloGravissima;
        veloLeve = 50 * 1.1;
        veloMedia = 70;
        veloGrave = 90;
        veloGravissima = 110;


        printf("Informe a velocidade que o veículo passou: ");
        scanf("%d", &veloVeiculo);
        if(veloVeiculo <= veloLeve)
        printf("Isento de multa\n");
        else if (veloVeiculo <= veloMedia)
        printf("3 pontos na carteira\n");
        else if(veloVeiculo <= veloGrave)
        printf("4 pontos na carteira\n");
        else if(veloVeiculo <= veloGravissima)
        printf("5 pontos na carteira\n");
        else{
        printf("7 pontos na carteira\n");
}
}
