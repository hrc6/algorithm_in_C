#include<stdio.h>
#include<stdlib.h>

int main (){
	
FILE *arq; // declaração de um ponteiro para o arquivo 
char frase [10]; //declaração de uma string 
int i, num, vt [10], rest ;
 
arq = fopen("seleciona_numeros.txt", "w");

	printf("Digite um numero: ");
	scanf("%d", &vt[1]);
	
	printf("Digite um numero: ");
	scanf("%d", &vt[2]);
	
	printf("Digite um numero: ");
	scanf("%d", &vt[3]);
	
	printf("Digite um numero: ");
	scanf("%d", &vt[4]);
	
	printf("Digite um numero: ");
	scanf("%d", &vt[5]);
	
	printf("Digite um numero: ");
	scanf("%d", &vt[6]);
	
	printf("Digite um numero: ");
	scanf("%d", &vt[7]);
	
	printf("Digite um numero: ");
	scanf("%d", &vt[8]);
	
	printf("Digite um numero: ");
	scanf("%d", &vt[9]);
	
	printf("Digite um numero: ");
	scanf("%d", &vt[10]);


if(rest = vt[8] %2 == 1)
{
	printf("%d", vt[8]);
}
}

