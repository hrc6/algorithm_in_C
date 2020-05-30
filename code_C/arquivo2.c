#include <stdio.h>
#include <stdlib.h>

int main (){

FILE *arq; // declaração de um ponteiro para o arquivo 
char frase [20], frase2 [20]; //declaração de uma string 
 
	arq = fopen("teste.txt", "w"); //cria o arquivo para escrita 
  		
		printf (" Entre uma frase:"); //pede ao utilizador para escrever uma frase 
		gets (frase);  //le a frase
  
 		fprintf( arq, "%s\n", frase); // escreve no arquivo "teste2" a frase inserida
  		
		printf (" Entre uma frase:");
		gets(frase2);  
  
 		fprintf( arq, "%s", frase2); 
 		
    	fclose(arq); // fecha o arquivo 
  
  return 0;
}
