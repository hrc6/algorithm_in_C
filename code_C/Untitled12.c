#include <stdio.h>
int main(){
	int n;
	
	printf("Digite um numero: \n");
	scanf("%d",&n);
	if (n>=100&&n<=200){
		printf("Esta entre o intervalo de 100 e 200");
	}
	else
	{
		printf("Nao esta entre o intervalo entre 100 e 200");
	}
		
return 0;
}
