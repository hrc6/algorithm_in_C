#include <stdio.h>
int main ()
{
	int n,quant,n2;
	
		printf("Digite a quantidade de numeros: \n");
		scanf("%d", &quant);
		
	for(n=1; n<=quant; n=n+1)
	{
		printf("\n Digite um numero: \n");
		scanf("%d", &n2);
					
		if ((n2>=100)&&(n2<=200))
		{
			printf("Esta entre 100 e 200! \n");
			printf("------------------------------------");
		}
		else
		{
			printf("Nao esta entre 100 e 200! \n");
			printf("------------------------------------");
		}
	
	
	
	}
	
	return 0;
}
