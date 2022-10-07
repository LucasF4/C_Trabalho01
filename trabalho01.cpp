#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <cstring>

//Estrutura do Produto
struct Produto{
	char nome[50];
	int codProd;
	int qtd;
};


//Função de criação de pedido
int fpedido(){
	Produto produto;
	int option;
	int ref;
	printf("------------ CARDAPIO --------------\n");
	printf("| 1 - Refeições | 2 - Degustações  |\n");
	printf("| 3 - Bebidas   | 4 - Voltar       |\n");
	printf("------------------------------------\n\n");
	printf("Escolha a opção que você deseja fazer o pedido: ");
	scanf("%d", &option);
	system("cls");
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
			printf("-------------------------------\n");
			printf("Escolha uma Refeição: ");
			scanf("%d", &ref);
			printf("Informe a quantidade: ");
			scanf("%d", &produto.qtd);
			if(ref == 1){
				strcpy(produto.nome, "Bife com batata frita");
			}else if(ref == 2){
				strcpy(produto.nome, "Lasanha");
			}else if(ref == 3){
				strcpy(produto.nome, "Maria Isabel com frango");
			}else if(ref == 4){
				strcpy(produto.nome, "Panelada");
			}else{
				printf("Escolha uma opção válida!");
				return fpedido();
			}
			printf("\nVocê adicionou o ítem: %s com a quantidade de %d\n", produto.nome, produto.qtd);
			return fpedido();
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
			printf("| 4 - Água com gás               |\n");
			printf("-----------------------------");
			break;
	
		}
		case 4: {
			int telaPrincipal();
			break;
		}	
	}
	
	return 0;
}

//Funï¿½ï¿½o de criaï¿½ï¿½o de alteraï¿½ï¿½o do pedido
int alterpedido(){
	printf("Criar menu de alterar pedido");
}

//Funï¿½ï¿½o de criaï¿½ï¿½o de consultar pedido
int consulpedido(){
	printf("Criar menu de cunsultar pedido");
}

int telaPrincipal(){
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

//Menu Iniciar do Aplicativo
int main(void){
	setlocale(LC_ALL, "Portuguese");
	telaPrincipal();
}


