#include <stdio.h>

int main(){
	
	float nota1, nota2, media;
	
	printf("Digite a primeira nota");
	scanf("%f", &nota1);
	printf("Digite a segunda nota");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) / 2;
	
	
	
	if(media >= 7){
		printf("aprovado e a sua media �: %f", media);
	}else{
		printf("reprovado e a sua media �: %f", media);
	}
	
	return 0;
	
}
