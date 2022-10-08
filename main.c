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
} Produto[10];

typedef struct
{
	char nome[50];
	int codProd;
	int qtd;
} Produto2[10];

typedef struct
{
	char nome[50];
	int codProd;
	int qtd;
} Produto3[10];

Produto produto;
Produto2 produto2;
Produto3 produto3;

int fpedido();
int bebidas();
int degustacoes();
int alterpedido();
int consulpedido();
int telaPrincipal();

//Menu Iniciar do Aplicativo
int main(void){
	setlocale(LC_ALL, "Portuguese");
	telaPrincipal();
}


//FunÃ§Ã£o de criaÃ§Ã£o de pedido
int fpedido(){
	int option;
	int k;
	int ref;
	int i = 0;
	printf("\n>> ATENCAO: SE VOCE JA TIVER UMA LISTA, ELA SERA SUBSTITUIDA!\n\n");
	printf("------------ CARDAPIO --------------\n");
	printf("| 1 - Refeições | 2 - Degustações  |\n");
	printf("| 3 - Bebidas   | 4 - Voltar       |\n");
	printf("------------------------------------\n\n");
	printf("Escolha a opções que você deseja fazer o pedido: ");
	scanf("%d", &option);
	if(option < 1 || option > 4){
		system("cls");
		fpedido();
	}
	system("cls");
	switch (option){
		case 1: {
			for(i = 0; i < 10; i++){
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
				scanf("%d", &produto[i].qtd);
				if(ref == 1){
					strcpy(produto[i].nome, "Bife com batata frita");
					produto[i].codProd = i;
				}else if(ref == 2){
					strcpy(produto[i].nome, "Lasanha");
					produto[i].codProd = i;
				}else if(ref == 3){
					strcpy(produto[i].nome, "Maria Isabel com frango");
					produto[i].codProd = i;
				}else if(ref == 4){
					strcpy(produto[i].nome, "Panelada");
					produto[i].codProd = i;
				}else{
					system("cls");
					printf("Escolha uma opção válida!");
					return fpedido();
				}
				printf("\nVocÃª adicionou o item: %s com a quantidade de %d\n", produto[i].nome, produto[i].qtd);
				printf("[1] - Voltar | [2] - Pedir outro produto\n");
				scanf("%d", &k);
				system("cls");
				fflush(stdin);
				if(k == 1 || k != 2){
					telaPrincipal();
					return;
				}
			}
			
			return fpedido();
			break;
		}
		
		case 2:{
			degustacoes();
			break;
		}
		
		case 3: {
			bebidas();
			break;
		}
		
		case 4: {
			telaPrincipal();
			break;
		}	
	}
	
	return 0;
}

int bebidas(){
	int optionDrink;
	int i;
	int k;
			for(i = 0; i < 10; i++){
				printf("---------- CARDAPIO ----------\n");
				printf("| 1 - Coca-Cola              | Valor: R$7,00  |\n");
				printf("-----------------------------\n");
				printf("| 2 - Suco Maracujá          | Valor: R$5,00  |\n");
				printf("-----------------------------\n");
				printf("| 3 - Cerveja (Skol, Brahma) | Valor: R$8,00  |\n");
				printf("-----------------------------\n");
				printf("| 4 - Água com gás           | Valor: R$3,00  |\n");
				printf("-----------------------------\n");
				printf("Escolha uma Refeição: ");
				scanf("%d", &optionDrink);
				printf("Informe a quantidade: ");
				scanf("%d", &produto3[i].qtd);
				if(optionDrink < 1 || optionDrink > 4){
					printf("Opcao invalida\n");
					bebidas();
				}
				else if(optionDrink == 1){
					strcpy(produto3[i].nome, "Coca-Cola");
					produto3[i].codProd = i;
				}else if(optionDrink == 2){
					strcpy(produto3[i].nome, "Suco Maracujá");
					produto3[i].codProd = i;
				}else if(optionDrink == 3){
					strcpy(produto3[i].nome, "Cerveja (Skol, Brahma)");
					produto3[i].codProd = i;
				}else if(optionDrink == 4){
					strcpy(produto3[i].nome, "Água com gás");
					produto3[i].codProd = i;
				}
				else{
					system("cls");
					printf("Escolha uma opção válida!");
					fpedido();
					return;
				}
				printf("\nVocÃª adicionou o item: %s com a quantidade de %d\n", produto3[i].nome, produto3[i].qtd);
				printf("[1] - Voltar | [2] - Pedir outro produto\n");
				scanf("%d", &k);
				system("cls");
				fflush(stdin);
				if(k == 1 || k!= 2){
					telaPrincipal();
					return;
				}
			}
			
			return fpedido();
}

int degustacoes(){
			int deg;
			int i;
			int k;
			
			for(i = 0; i < 10; i++){
				printf("---------- CARDAPIO ------------------------------------\n");
				printf("| 1 - Batata Frita          | Valor: R$10,00           |\n");
				printf("--------------------------------------------------------\n");
				printf("| 2 - Enrolados de Carne    | Valor: R$12,00           |\n");
				printf("--------------------------------------------------------\n");
				printf("| 3 - Enrolados de Presunto | Valor: R$12,00           |\n");
				printf("--------------------------------------------------------\n");
				printf("| 4 - Petisco Sacanagem     | Valor: R$15,00           |\n");
				printf("--------------------------------------------------------\n");
				printf("Escolha uma Refeição: ");
				scanf("%d", &deg);
				printf("Informe a quantidade: ");
				scanf("%d", &produto2[i].qtd);
				if(deg == 1){
					strcpy(produto2[i].nome, "Batata Frita");
				}else if(deg == 2){
					strcpy(produto2[i].nome, "Enrolados de Carne");
				}else if(deg == 3){
					strcpy(produto2[i].nome, "Enrolados de Presunto");
				}else if(deg == 4){
					strcpy(produto2[i].nome, "Petisco Sacanagem");
				}else{
					printf("Escolha uma opção válida!");
					return fpedido();
				}
				printf("\nVocê adicionou o item: %s com a quantidade de %d\n", produto2[i].nome, produto2[i].qtd);
				printf("[1] - Voltar | [2] - Pedir outro produto\n");
				scanf("%d", &k);
				system("cls");
				fflush(stdin);
				if(k == 1 || k != 2){
					telaPrincipal();
					return;
				}
			}
			
			return fpedido();
}

//FunÃ§Ã£o de criaÃ§Ã£o de alteraÃ§Ã£o do pedido
int alterpedido(){
	printf("Alterar pedido");

}

//FunÃ§Ã£o de criaÃ§Ã£o de consultar pedido
int consulpedido(){
	int i;
	int retorno;
	printf("Seus pedidos \n\n");
	printf("Refeições: \n");
	for(i = 0; i < 10; i++){
		printf("%d %s \n",produto[i].qtd, produto[i].nome);
	}
	printf("Degustação: \n");
	for(i = 0; i < 10; i++){
		printf("%d %s \n",produto2[i].qtd, produto2[i].nome);
	}
	printf("Bebidas: \n");
	for(i = 0; i < 10; i++){
		printf("%d %s \n",produto3[i].qtd, produto3[i].nome);
	}
	
	printf("Pressione 0 para voltar!\n");
	scanf("%d", &retorno);
	system("cls");
	if(retorno != 0){
		system("cls");
		printf("Informe uma opção valida!\n");
		consulpedido();
	}else{
		fpedido();
	}
}

int telaPrincipal(){
	int choice;
	printf("\n\n------------- MENU PRINCIPAL --------------\n");
	printf("| 1 - Fazer Pedido     | 2 - Alterar Pedido |\n");
	printf("| 3 - Consultar Pedido | 4 - Sair           |\n");
	printf("------------------------------------------\n");
	printf("Escolha uma opÃ§Ã£o: ");
	scanf("%d", &choice);
	if(choice < 1 || choice > 4){
		system("cls");
		printf("\n>>Informe uma opcao valida\n\n");
		telaPrincipal();
	}
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
			printf("Saindo da aplicaÃ§Ã£o...");
			return 0;
			break;
		}
	}
}




