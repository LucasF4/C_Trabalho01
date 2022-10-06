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
	printf("| 1 - Refei��es | 2 - Degusta��es  |\n");
	printf("| 3 - Bebidas   |                  |\n");
	printf("------------------------------------\n\n");
	printf("Escolha a op��o que voc� deseja fazer o pedido: ");
	scanf("%d", &option);
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
	int choice;
	setlocale(LC_ALL, "Portuguese");
	printf("-----------------------------------------------\n");
	printf("| 1 - Fazer Pedido     | 2 - Alterar Pedido |\n");
	printf("| 3 - Consultar Pedido | 4 - Sair           |\n");
	printf("------------------------------------------\n");
	printf("Escolha uma op��o: ");
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
			printf("Saindo da aplica��o...");
			return 0;
			break;
		}
	}
}


