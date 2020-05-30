#include <stdio.h>
#include <stdlib.h>
int main(){
	
	FILE *arq;
	arq = fopen("leitura.txt", "r");
	printf("Leitura do arquivo: \n");
	printf("\n");
	//Fazer o programa ler o arquivo que já está criado
	
	fclose(arq); 
	
return 0;
}

// idades.txt,idades de 8 alunos em linhas separadas (manualmente).
	//Faça um programa em C que leia esses números do arquivo e os guarde em vetor de 8 posições. Depois, imprima esse vetor na tela e informe na tela também a quantidade de alunos que tem idade maior ou igual a 25.
