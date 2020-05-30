#include <stdio.h>
#include <string.h>

int main()
{
	char nome[4];

	puts("introduza seu nome\n");
	fgets(nome, sizeof(nome), stdin);

	puts(nome);
	
	return 0;
}
