#include<stdio.h>

/* função chamando função*/

int     main()
{
	int     somar(int x, int y);
	int	testar();
        printf("%d\n", testar());
	
}

        int     somar(int x, int y)
{
        return(x + y);

}

	int	testar()
{
	return(somar(50,50) + 40); /* testar invoca somar e soma com 40*/

}
