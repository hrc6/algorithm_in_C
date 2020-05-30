#include <stdio.h>
int main()
{
	int vetor [8];
	int i,cont;
	float cont2;
	cont=0; // iniciando contador
	cont2=0; // iniciando o contador 2
	for (i=0; i<=7; i++) //laço de repetição for para percorrer o vetor e guardar os dados no vetor
	{
		printf("Digite sua idade \n");
		scanf("%d",&vetor[i]);
		
		cont2=cont2+vetor[i];
		
		if (vetor[i]>=18&&vetor[i]<30) // condição para ativar o contador
		{
			cont=cont+1;
		}
		
	}	
	//impressão dos valores
	printf("\n");
	printf(" A quantidade de alunos com idade maior ou igual a 18  e menor que 30 e: %d",cont);
	printf("\n");
	printf("A idade media dessas pessoas e: %f",cont2/8);
return 0;
}
