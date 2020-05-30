#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *arq;
	char frase1[20], frase2[20];
		
	arq = fopen("teste2.txt", "w");
		
		printf("Entre uma frase: ");
		scanf("%s", frase1);
		fprintf(arq, "%s\n", frase1);
		
		printf("Entre uma frase: ");
		scanf("%s", frase2);
		fprintf(arq, "%s", frase2);
	
	fclose (arq);
	
	return 0;
}
