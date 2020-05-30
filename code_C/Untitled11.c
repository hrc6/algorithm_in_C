#include <stdio.h>
int main(){
	float sal;
	
	printf("Digite seu salario: \n");
	scanf("%f",&sal);
	if (sal<=600){
		printf("Seu salario e %f, nao tem desconto",sal);
	}
	else
	if (sal>=600&&sal<=1200){
		printf("Seu salario tera desconto e sera: %f",(sal-(0.2*sal))
	}
	else
	if ((sal>=1200)&&(sal<=2000)){
		printf("Seu salario tera desconto e sera: %f",(sal-(0.25*sal))
	}	
	else
	if (sal>=2000){
		printf("Seu salario tera desconto e sera: %f",(sal-(0.3*sal))
	}
return 0;
}

// Tá com erro
