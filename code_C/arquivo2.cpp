#include <stdio.h>
#include <stdlib.h>

int main (){

FILE *arq; // declaração de um ponteiro para o arquivo 
char frase [20]; //declaração de uma string 
 
	arq = fopen("teste2.txt", "w"); //cria o arquivo para escrita 
  		
		printf (" Entre uma frase:"); //pede ao utilizador para escrever uma frase 
		scanf("%s", frase);  //le a frase
  
 		fprintf( arq, "%s", frase); // escreve no arquivo "teste2" a frase inserida
  
    	fclose(arq); // fecha o arquivo 
    	
    	arq = fopen("teste2.txt", "w"); //cria o arquivo para escrita 
  		
		printf (" Entre uma frase:"); //pede ao utilizador para escrever uma frase 
		scanf("%s", frase);  //le a frase
  
 		fprintf( arq, "%s", frase); // escreve no arquivo "teste2" a frase inserida
  
    	fclose(arq); // fecha o arquivo 
  
  return 0;
}
