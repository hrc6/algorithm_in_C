#include <stdio.h>
#include <stdlib.h>
int main(){
	
	FILE *arq;
	arq = fopen("leitura.txt", "r");
	printf("Leitura do arquivo: \n");
	printf("\n");
	//Fazer o programa ler o arquivo que j� est� criado
	
	fclose(arq); 
	
return 0;
}

// idades.txt,idades de 8 alunos em linhas separadas (manualmente).
	//Fa�a um programa em C que leia esses n�meros do arquivo e os guarde em vetor de 8 posi��es. Depois, imprima esse vetor na tela e informe na tela tamb�m a quantidade de alunos que tem idade maior ou igual a 25.
