#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char nome[20];
	char sit [20];
	float nota1, nota2,media;
	
	FILE *arq;
	arq = fopen("arqmedia.txt", "w");
	printf("Digite seu nome: \n");
	gets(nome);
	fprintf(arq, "Nome: %s \n",nome);
	printf("Digite sua primeira nota: \n");
	scanf("%f",&nota1);
	printf("Digite sua segunda nota: \n");
	scanf("%f",&nota2);
	media=((nota1+nota2)/2);
	fprintf (arq, "Media: %f \n",media);
	if (media <=7){
		
		fprintf(arq, "Situação: Reprovado \n");
	}
	else
	{
		fprintf(arq, "Situação: Aprovado \n");
	}
	//	fprintf( , "%s", frase); // escreve no arquivo "teste2" a frase inserida
  
    	fclose(arq); // fecha o arquivo 
	
return 0;
}
