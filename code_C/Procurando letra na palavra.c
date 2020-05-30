#include <stdio.h>
#include <string.h>
int main()
{
	char nome,string[10];
	int i,cont;
	
	cont=0;
	printf("Digite uma letra: \n");
	scanf("%c",&nome);
	printf(" Escreva um nome: \n");
	scanf("%s",string);

	
	for (i=0; i<=9; i=i+1)
	{
		if (string[i] == nome)
		{
			printf(" ");
			cont=cont+1;
		}
	}
	
	printf("A quatidade e: %d\n",cont);
	
return (0);
}
