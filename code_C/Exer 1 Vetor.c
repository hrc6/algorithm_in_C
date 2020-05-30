#include <stdio.h>
int main()
{
	int vetor [10]= {1,2,3,4,5,6,7,8,9,10};
	int num,n;
	
	printf("Digite um numero \n");
	scanf("%d",&num);
	
	
	
	for (n=0; n<=9; n++)
	
	{
		
		
    	if (vetor[n]==num)
		{	
			printf("Congratulation, you're right! \n");
			n++;
		}
	    else
		{
			printf("You missed, try again! \n");
			printf("%d", n);
			break;
		}
		
		

	
			
	}
	
return (0);
}
