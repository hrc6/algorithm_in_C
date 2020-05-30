#include <stdio.h>
#include <string.h>
int main(){
	char senha1 [8], senha2 [8];
	printf("SENHA: ");
	gets(senha1);
	printf("SEGUNDA SENHA");
	gets(senha2);	
	if (strcmp (senha1, senha2)==0) {
		printf(" Senha correta");
	}
	else
	{
		printf("Senha incorreta");
	}
return 0;
}
