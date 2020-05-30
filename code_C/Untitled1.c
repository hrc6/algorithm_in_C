#include <stdio.h>

int main()
{
	int num;
	float soma,media,val;
	
	for (num=1; num<=10; num=num+1)  
	
	{
		printf("Digite um numero: \n",num);
		scanf("%f",&val);
		soma=soma+val;
	}
	media=soma/10;
	printf("A media e: %f",media);
	
	return 0;
}
