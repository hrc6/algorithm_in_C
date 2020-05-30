#include <stdio.h>

#include <conio.h>

#include <ctype.h>

#include <math.h>

#include <stdlib.h>

//#include <iostream.h>

//#include <iomanip.h>

#include <string.h>

struct cadastro{

char nome[100];

char cpf[100];

char nr_conta[100];

int saldo;

int saque;

int deposito;

}pessoa[100];

void menu();

void selecao();

void cadastro();

void deposito();

void saque();

void consulta();

void transferencia();

void sair();

int main(){

menu();

return 0;

system("pause");

}

void menu(){

system("color A0");

system("cls");

printf("\n ================================================");

printf("\n SISTEMA DE CONTROLE BANCARIO ");

printf("\n ================================================");

printf("\n\n ESCOLHA UMA OPCAO ABAIXO: \n\n");

printf("\n ============================= ");

printf("\n | *** MENU *** = ");

printf("\n ----------------------------- ");

printf("\n |(1) - CADASTRO = ");

printf("\n ----------------------------- ");

printf("\n |(2) - DEPOSITO = ");

printf("\n ----------------------------- ");

printf("\n |(3) - SACAR = ");

printf("\n ----------------------------- ");

printf("\n |(4) - CONSULTAR SALDO = ");

printf("\n ----------------------------- ");

printf("\n |(5) - TRANSFERENCIA = ");

printf("\n ----------------------------- ");

printf("\n |(6) - SAIR DO SISTEMA = ");

printf("\n ============================= ");

selecao();

}

void selecao(){

int opcao;

printf("\n\n\n DIGITE SUA OPCAO: ");

scanf("%i",&opcao);

switch(opcao){

case 1:

cadastro();

getch();

menu();

break;

case 2:

deposito();

getch();

menu();

break;

case 3:

saque();

getch();

menu();

break;

case 4:

consulta();

getch();

menu();

break;

case 6:

exit(0);

break;

default:

printf("\n\n NUMERO não IDENTIFICADO!");

printf("\n\n POR FAVOR TENTE NOVAMENTE");

getch();

menu();

break;

}

}

void cadastro(){

int saldo;

int saque;

int deposito,i;

for(i=0; i<1; i++){

system("cls");

printf("\n\n FORMULARIO PARA CADASTRO DE CLIENTES \n\n");

printf("\n 1 - DIGITE O NOME DO CLIENTE: ");

fflush(stdin);

//gets(pessoa.nome);

printf("\n 3 - DIGITE CPF DO CLIENTE: ");

fflush(stdin);

//gets(pessoa.cpf);

printf("\n 2 - DIGITE NUMERO DA CONTA: ");

fflush(stdin);

//gets(pessoa.nr_conta);

printf("\n 4 - DIGITE SALDO INICIAL: ");

scanf("%d",&saldo);

}

}

void deposito(){

int saldo;

int saque;

int deposito,i;

for(i=0; i<1; i++){


system("cls");

printf("\n\n DIGITE VALOR DO DEPOSITO: ");

scanf("%d",&deposito);

saldo = saldo + deposito;

printf ("\n |==============================================|");

printf ("\n | Sistema de Controle Bancario ");

printf ("\n |==============================================|");

printf ("\n | Operacao Deposito ");

printf ("\n |==============================================|");


//printf(" \n\n CLIENTE: %s",pessoa.nome);

//printf(" \n\n CONTA NUMERO: %s",pessoa.nr_conta);

printf(" \n\n SALDO ATUAL: %d",saldo);

getch();

menu();

}

}

void saque(){

int saldo;

int saque;

int i,deposito;

for( i=0; i<1; i++){

system("cls");


printf("\n\n QUANTO DESEJA SACAR ");

scanf("%d",&saque);

if (saldo < saque){

printf(" não FOI POSSIVEL REALIZAR OPERACAO. SALDO INSUFICIENTE");

}

else saldo = saldo - saque;

{ system("cls");

////printf( "\n\n CLIENTE: %s",pessoa.nome);

//printf( "\n\n CONTA NUMERO: %s ",pessoa.nr_conta);

printf( "\n\n OPERAÇAO REALIZADA COM SECESSO, NOVO SALDO: %d ",saldo);

}

getch();

menu();

}

}

void consulta(){

int saldo;

int saque;

int deposito;

int consulty,i;


system("cls");

printf(" \n\n DIGITE O NUMERO DA SUA CONTA");

scanf("%d",&consulty);

//for(i=0; i<1; i++){


//if (pessoa.nr_conta,consulty){

//printf(" \n\n CONTA não ENCONTRADA." );

//printf(" \n\n POR FAVOR, TENTE NOVAMENTE. ");

//getch();

//system("cls");

//consulta();

//}

//else {

//system("cls");

//printf(" \n\n CLINTE ENCONTRADO ");

//printf(" \n\n CLIENTE: %s",pessoa.nome);

//printf(" \n\n CONTA NUMERO: %s",pessoa.nr_conta);

//printf(" \n\n SALDO ATUAL: %d",saldo);

//getch();

//menu();

//}

//}

return 0;
}


