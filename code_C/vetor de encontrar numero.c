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
			printf("O vetor esta %d\n", numero[i]);
		}
		else if (i == 10)
		{
			printf("O vetor nao esta");
		}
	}
	
	return 0;
}


