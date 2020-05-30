#include <stdio.h>
#include <string.h>

int main()
{
	char nome[20];
	int i;
	
	printf("introduza uma palavra\n");
	fgets(nome, sizeof(nome), stdin);
	
	for(i = 19; i >=0; i--)
	{
		printf("%c",nome[i]);
	}
return 0;
}
