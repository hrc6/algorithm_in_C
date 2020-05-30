#include <stdio.h>

int main(){
	int i,n,m;
	printf("Digite um numero \n");
	scanf("%d",&n);
	
	for(i=1;i<=11;i++)
	{
		printf("%dx=%d= %d \n",n,i,m);
		m=n*i;
	}
	return 0;
}
