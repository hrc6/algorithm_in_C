#include <stdio.h>
#include <string.h>

int main()
{
	char nome[20];
	char teste[22];
	int i,tamanho;
	
	printf("introduza uma palavra\n");
	//fgets(nome, sizeof(nome), stdin);
	gets(nome);
//	tamanho=strlen(nome);
	strcpy (teste, nome);
	
	printf("A quantidade de carcterer da string e: %d",tamanho); 
	printf("\n");
	for(i = tamanho-1; i >=0; i--)
	{
		printf("%c",nome[i]);
	//	printf("%c",teste[22]);
	}
	 
return 0;
}
