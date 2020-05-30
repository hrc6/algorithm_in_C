#include <stdio.h>
int main(){
	int n1,n2,s;
	
	printf("Digite um numero: \n");
	scanf("%d",&n1);
	printf("Digite um numero: \n");
	scanf("%d",&n2);
	s=n1+n2;
	
	if (n1+n2>=10){
	printf("%d \n",s);
	}
	else
	{
	printf("Soma menor que 10 \n");

	}
	
	
return 0;
}
