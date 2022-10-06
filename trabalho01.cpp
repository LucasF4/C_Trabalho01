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

//Função para criação do Pedido
int fpedido(){
	int option;
	printf("------------ CARDAPIO --------------\n");
	printf("| 1 - Refeições | 2 - Degustações  |\n");
	printf("| 3 - Bebidas   |                  |\n");
	printf("------------------------------------\n\n");
	printf("Escolha a opção que você deseja fazer o pedido: ");
	scanf("%d", &option);
	return 0;
}

//Menu Iniciar do Aplicativo
int main(){
	int choice;
	setlocale(LC_ALL, "Portuguese");
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
	}
}


