#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *arq;
	int  numeros[10];
	int i,j;
	
	arq = fopen("Seleciona_numeros","w");
	for(i=0;i<=9;i++)
	{
		printf("digite os numeros: \n");
		scanf("%d",&numeros[i]);
	}
		for(j=0;j<=9;j++)
	{
		if(numeros[j]%2==1){
			fprintf(arq,"Numeros Impar\n");
			fprintf(arq, "%d\n",numeros[j]);
		}
			if(numeros[j]%2==0){
			fprintf(arq,"Numeros Par\n");
			fprintf(arq, "%d\n",numeros[j]);
		}
	}
	fclose (arq);
		
	return 0;	
}
