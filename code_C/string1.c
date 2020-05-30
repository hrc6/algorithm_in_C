#include <stdio.h>
#include <string.h>

int main()
{
	char nome[50];
	int i;
	
	printf("introduza seu nome\n");
	gets(nome);

	printf("%s", nome);
	
	return 0;
}
