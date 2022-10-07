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


//Fun��o de cria��o de pedido
int fpedido(){
	int option;
	int ref;
	printf("------------ CARDAPIO --------------\n");
	printf("| 1 - Refei��es | 2 - Degusta��es  |\n");
	printf("| 3 - Bebidas   | 4 - Voltar       |\n");
	printf("------------------------------------\n\n");
	printf("Escolha a op��o que voc� deseja fazer o pedido: ");
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
			printf("Escolha uma Refei��o: ");
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
				printf("Escolha uma op��o v�lida!");
				return fpedido();
			}
			printf("\nVoc� adicionou o �tem: %s com a quantidade de %d\n", produto.nome, produto.qtd);
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
			int optionDrink;
			printf("---------- CARDAPIO ----------\n");
			printf("| 1 - Coca-Cola                  |\n");
			printf("-----------------------------\n");
			printf("| 2 - Suco (Maracuj� e Acerola)  |\n");
			printf("-----------------------------\n");
			printf("| 3 - Cerveja (Skol, Brahma)     |\n");
			printf("-----------------------------\n");
			printf("| 4 - �gua com g�s               |\n");
			printf("-----------------------------\n");
			printf("| 5 - Voltar                     |\n");
			printf("-----------------------------\n");
			printf("Escolha uma op��o v�lida: ");
			scanf("%d", &optionDrink);
			system("cls");
			if(optionDrink == 5){
				fpedido();
			}
			break;
	
		}
		case 4: {
			telaPrincipal();
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
	int retorno;
	printf("Seus pedidos: \n");
	printf("%s\n", produto.nome);
	printf("Pressione 0 para voltar!\n");
	scanf("%d", &retorno);
	if(retorno != 0){
		system("cls");
		printf("Informe uma op��o v�lida!\n");
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




