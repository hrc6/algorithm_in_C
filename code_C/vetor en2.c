#include <stdio.h>
int main(){
	
	int i, num;
	int numero[10] = {1,2,3,4,5,6,7,8,9,10};
	
	printf ("digite um valor");
	scanf ("%d", &num);
	

	
	for (i=0; i<=9; i++)
	{
		if(numero[i] == num)
		{
			printf("O numero esta %d\n", numero[i]);
		}
		else
		{
			printf("O numero nao esta\n");
		}
	
	}
	
	/*if(numero[i] != num){
		printf("O vetor nao esta");
	}*/

	return 0;
}
