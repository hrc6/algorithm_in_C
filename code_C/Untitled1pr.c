#include <stdio.h>
int main()
{
	int vetor [10];
	int i,n;
	
	for (i=0; i<=9; i++) //la�o de repeti��o for para percorrer o vetor
	{
		printf("Digite 10 numeros inteiros \n");
		scanf("%d",&vetor[i]);
	}
	for (i=0; i<=9; i++) // la�o para percorrer o vetor
	{
		
		if ((vetor[i]%2==0)&&(vetor[i]%3==0)&&(vetor[i]%10==0)) // condi��o para imprimir os multiplos
		{
			printf("Esse numero e multiplo de 2,3 e 10:   %d \n",vetor[i]);
		}
		
	}
	// � s� dividir 2,3 e 10 com resto 0 que funciona. 
return 0;
}
