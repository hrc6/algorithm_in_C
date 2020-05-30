#include <stdio.h>
int main(){
	int n1,n2,n3;
	
	printf("Digite um numero: \n");
	scanf("%d",&n1);
	printf("Digite um numero: \n");
	scanf("%d",&n2);
	printf("Digite um numero: \n");
	scanf("%d",&n3);
	
	if (n1>n2&&n3){
		printf("Esse e o maior numero: %d",n1);
	}
	else
	if (n2>n1&&n3){
		printf("Esse e o maior numero: %d",n2);
	}
	else
	if (n3>n1&&n2){
		printf("Esse e o maior numero: %d",n3);
	}
return 0;
}
