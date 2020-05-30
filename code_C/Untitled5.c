#include <stdio.h>
int main(){
	int n;
	
	printf("Digite a quantida de fotocopias \n");
	scanf("%d",&n);
	
	if (n<=100){
		
		printf("O valor da fotocopia e: %f",(n*0.25));
	}
	else
	{
		printf("O valor da fotocopia e: %f",(n*0.20));
	}
		
return 0;
}
