#include <stdio.h>

int main()
  
{

	int idade;
	printf("qual sua idade? ");
	scanf("%d", &idade);

	{
		if(idade >= 18)
		printf("vc está apto\n");
		else
		printf("vc não está apto\n");
		return(0);
	}	

}
