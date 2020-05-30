#include <stdio.h>
#include <string.h>
int main()
{
	char var[20];
	int idade;
	
	printf(" Escreva seu nome: \n");
	scanf("%s",var);
	printf("Qual sua idade?: \n");
	scanf("%d",&idade);
	printf("Ola %s" " sua idade e: %d",var,idade);
	
return (0);
}
