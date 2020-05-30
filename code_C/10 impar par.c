#include <stdio.h>

//Banco

int main()
{
	int num, i, par, impar;
	
	par=0;
	impar=0;
	
	printf("Digite 10 numeros: \n");
	
	for(i=1; i<=10; i++){
	printf("Numero: \n");
	scanf("%d", &num);
	
	if(num%2 ==0){
		par++; 
	}
	else
	{
		impar++;
	}
	
	}
	
	printf("numeros de pares: %d\n", par);
	printf("numeros de impares: %d", impar);
			

	return 0;
}
