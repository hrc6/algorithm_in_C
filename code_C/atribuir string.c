#include <stdio.h>
#include <string.h>

int main()
{
	
	char teste [50] = "Texto a ser inserido em testecopia";
	char testecopia [50];
	strcmp(teste, testecopia);     // Comparar strings
	//strcpy (testecopia, teste); //str_destino,origem
	printf("\n %s \n", testecopia);
return 0;
}

//Pe�a ao utilizados duas strings e compare se as strings s�o iguais ou n�o
