#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


//Estrutura do Produto
struct produto{
	char nome[50];
	int codProd;
	int qtd;
};

//Fun��o para cria��o do Pedido
int fpedido(){
	int option;
	printf("------------ CARDAPIO --------------\n");
	printf("| 1 - Refeições | 2 - Degustações  |\n");
	printf("| 3 - Bebidas   |                  |\n");
	printf("------------------------------------\n\n");
	printf("Escolha a opçãoo que vocÊ deseja fazer o pedido: ");
	scanf("%d", &option);
	switch (option){
	case 1: {
		printf("---------- CARDAPIO ----------\n");
		printf("| 1 - Bife com batata frita   |\n");
		printf("-------------------------------\n");
		printf("| 2 - Lasanha                 |\n");
		printf("-------------------------------\n");
		printf("| 3 - Maria Isabel com frango |\n");
		printf("-------------------------------\n");
		printf("| 4 - Panelada                |\n");
		printf("-------------------------------");
		break;
	}
	case 2:{
		printf("---------- CARDAPIO ----------\n");
		printf("| 1 - Batata Frita          |\n");
		printf("-----------------------------\n");
		printf("| 2 - Enrolados de Carne    |\n");
		printf("-----------------------------\n");
		printf("| 3 - Enrolados de Presunto |\n");
		printf("-----------------------------\n");
		printf("| 4 - Petisco Sacanagem     |\n");
		printf("-----------------------------");
		break;
	}
	case 3:{
		printf("---------- CARDAPIO ----------\n");
		printf("| 1 - Coca-Cola                  |\n");
		printf("-----------------------------\n");
		printf("| 2 - Suco (Maracujá e Acerola)  |\n");
		printf("-----------------------------\n");
		printf("| 3 - Cerveja (Skol, Brahma)     |\n");
		printf("-----------------------------\n");
		printf("| 4 - Água com Gás               |\n");
		printf("-----------------------------");
		break;

	}
		
	}
	
	return 0;
}

//Fun��o de cria��o de altera��o do pedido
int alterpedido(){
	printf("Criar menu de alterar pedido");
}

//Fun��o de cria��o de consultar pedido
int consulpedido(){
	printf("Criar menu de cunsultar pedido");
}

//Menu Iniciar do Aplicativo
int main(){
	setlocale(LC_ALL, "Portuguese");
	int choice;
	printf("-----------------------------------------------\n");
	printf("| 1 - Fazer Pedido     | 2 - Alterar Pedido |\n");
	printf("| 3 - Consultar Pedido | 4 - Sair           |\n");
	printf("------------------------------------------\n");
	printf("Escolha uma opção: ");
	scanf("%d", &choice);
	switch(choice){
		case 1: {
			system("cls");
			fpedido();
			break;
		}
		case 2: {
			system("cls");
			alterpedido();
			break;
		}
		case 3: {
			system("cls");
			consulpedido();
			break;
		}
		case 4: {
			system("cls");
			printf("Saindo da aplicação...");
			return 0;
			break;
		}
	}
}


