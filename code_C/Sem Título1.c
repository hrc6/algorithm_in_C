#include <stdio.h>
#include <string.h>

int main(){
	char nome[50];
	int i, tamanho;
	
	printf("digite uma palavra: \n");
	gets(nome);
	
	tamanho = strlen(palavra);
	
	printf("tamanho e: %d \n", tamanho);
	
	for(i=tamanho-1;i>=0i--)
	{
		printf("%c", palavra[i]);
	}
	 return 0;
}
