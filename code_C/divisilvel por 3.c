#include <stdio.h>

int main ()
{
	float count, num,soma, media;
	
	soma=0;
	
	for(count=1; count<=5; count++)
	{
		printf("Digite um numero: ");
		scanf("%f", &num);
		soma = soma + num;	
	}
	
	media=soma / 5;
	
	printf("A media e: %f", media);

	return 0;
}
