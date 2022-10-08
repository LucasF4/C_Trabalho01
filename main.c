#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <string.h>

//Estrutura do Produto
typedef struct
{
	char nome[50];
	int codProd;
	int qtd;
} Produto;

Produto produto;

int fpedido();
int alterpedido();
int consulpedido();
int telaPrincipal();

//Menu Iniciar do Aplicativo
int main(void){
	setlocale(LC_ALL, "Portuguese");
	telaPrincipal();
}


//Função de criação de pedido
int fpedido(){
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
			printf("\nVocê adicionou o item: %s com a quantidade de %d\n", produto.nome, produto.qtd);
			return fpedido();
			break;
		}
		case 2:{
			int deg;
			printf("---------- CARDAPIO ----------\n");
			printf("| 1 - Batata Frita          |\n");
			printf("-----------------------------\n");
			printf("| 2 - Enrolados de Carne    |\n");
			printf("-----------------------------\n");
			printf("| 3 - Enrolados de Presunto |\n");
			printf("-----------------------------\n");
			printf("| 4 - Petisco Sacanagem     |\n");
			printf("-----------------------------\n");
			printf("Escolha uma Refeição: ");
			scanf("%d", &deg);
			printf("Informe a quantidade: ");
			scanf("%d", &produto.qtd);
			if(deg == 1){
				strcpy(produto.nome, "Batata Frita");
			}else if(deg == 2){
				strcpy(produto.nome, "Enrolados de Carne");
			}else if(deg == 3){
				strcpy(produto.nome, "Enrolados de Presunto");
			}else if(deg == 4){
				strcpy(produto.nome, "Petisco Sacanagem");
			}else{
				printf("Escolha uma opção válida!");
				return fpedido();
			}
			printf("\nVocê adicionou o item: %s com a quantidade de %d\n", produto.nome, produto.qtd);
			return fpedido();
			break;
		}
		case 3:{
			int optionDrink;
			printf("---------- CARDAPIO ----------\n");
			printf("| 1 - Coca-Cola                  |\n");
			printf("-----------------------------\n");
			printf("| 2 - Suco Maracujá              |\n");
			printf("-----------------------------\n");
			printf("| 3 - Cerveja (Skol, Brahma)     |\n");
			printf("-----------------------------\n");
			printf("| 4 - Água com gás               |\n");
			printf("-----------------------------\n");
			printf("| 5 - Voltar                     |\n");
			printf("-----------------------------\n");
			printf("Escolha uma opção válida: ");
			scanf("%d", &optionDrink);
			system("cls");
			printf("Informe a quantidade: ");
			scanf("%d", &produto.qtd);
			if(optionDrink == 1){
				strcpy(produto.nome, "Coca-Cola");
			}
			else if(optionDrink == 2){
				strcpy(produto.nome, "Suco Maracujá");
			}
			else if(optionDrink == 3){
				strcpy(produto.nome, "Cerveja (Skol, Brahma)");
			}
			else if(optionDrink == 4){
				strcpy(produto.nome, "Água com gás");
			}
			else if(optionDrink == 5){
				return fpedido();
			}else{
				printf("Escolha uma opção válida!");
				return fpedido();
			}

			printf("\nVocê adicionou o item: %s com a quantidade de %d\n", produto.nome, produto.qtd);
			return fpedido();
			break;
	
		}
		case 4: {
			telaPrincipal();
			break;
		}	
	}
	
	return 0;
}

//Função de criação de alteração do pedido
int alterpedido(){
	printf("Alterar pedido");

}

//Função de criação de consultar pedido
int consulpedido(){
	int retorno;
	printf("Seus pedidos: \n");
	printf("%d %s \n",produto.qtd, produto.nome);
	printf("Pressione 0 para voltar!\n");
	scanf("%d", &retorno);
	if(retorno != 0){
		system("cls");
		printf("Informe uma opçãoo válida!\n");
		consulpedido();
	}else{
		fpedido();
	}
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




