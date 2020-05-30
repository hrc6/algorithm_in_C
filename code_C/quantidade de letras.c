#include <stdio.h>
#include <string.h>

int main()
{
	char nome[10];
	char lt;
	int i, conta;
	conta = 0;

	printf("introduza uma palavra\n");
	fgets(nome, sizeof(nome), stdin);
	puts("introduza a letra\n");
	lt = getchar();	
	
	
	for(i = 0; i <= 9; i++)
	{
		if(nome[i] == lt)
		{
			conta++;
		}
	}

	printf("%d", conta);

	return 0;
}
