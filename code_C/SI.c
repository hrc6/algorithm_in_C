#include <stdio.h>

int main ()

{	int senha,sdb,opcao;
	sdb=12345;

	printf("Digite sua senha: \n");
	scanf("%d",&senha);
		
	
	while (senha==sdb) 
		{	
			printf ("1- Saque \n");
			printf ("2- Tranferencia \n");
			printf ("3- Deposito \n");
			printf ("4- Recarga de Celular \n");
			printf ("5- Sair \n");
			
			printf ("Escolha uma opcao: \n");
			scanf ("%d",&opcao);
			
				if (opcao==5)
				{	
					break;
				}
			
		
		}

return (0);
} 
