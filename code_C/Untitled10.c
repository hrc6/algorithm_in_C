#include <stdio.h>
int main(){
	float n1,n2,n3,m1,m2,m3,m;
	
	printf("Digite a primeira nota: \n");
	scanf("%f",&n1);
	printf("Digite a segunda nota: \n");
	scanf("%f",&n2);
	printf("Digite a terceira nota: \n");
	scanf("%f",&n3);		
	
	m1=(n1*0.2);
	m2=(n2*0.3);
	m3=(n3*0.5);
	m=(n1+n2+n3)/3;
	if(m>=7){
		printf("Aluno aprovado");
	}
	else
	{
		printf("Aluno reprovado");
	}
	
		
return 0;
}
