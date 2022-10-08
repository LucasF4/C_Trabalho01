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
	float valor;
} Produto[10];

typedef struct entrada{
	char index[50];
} ;

typedef struct
{
	char nome[50];
	int codProd;
	int qtd;
	float valor;
} Produto2[10];

typedef struct
{
	char nome[50];
	int codProd;
	int qtd;
	float valor;
} Produto3[10];

struct tm *timeinfo;

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

	time_t time2;
	time2 = time(NULL);
	//printf("%d", &time);
	
	timeinfo = localtime(&time2);
	
	printf("%02d:%02d:%02d", timeinfo->tm_hour, timeinfo->tm_min, timeinfo->tm_sec);

	/* time_t tempo;
	time (&tempo);
	struct tm *tempo = gmtime(&tempo);
	printf("%d", tempo -> tm_hour ); */


	setlocale(LC_ALL, "Portuguese");
	telaPrincipal();
}


//Função de criação de pedido
int fpedido(){
	int option;
	int k;
	int ref;
	int i = 0;
	printf("\n>> ATENCAO: SE VOCE JA TIVER UMA LISTA, ELA SERA SUBSTITUIDA!\n\n");
	printf("------------ CARDAPIO --------------\n");
	printf("| 1 - Refeicoes | 2 - Degustacoes  |\n");
	printf("| 3 - Bebidas   | 4 - Voltar       |\n");
	printf("------------------------------------\n\n");
	printf("Escolha a opcoes que voce deseja fazer o pedido: ");
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
				printf("| 1 - Bife com batata frita   | Valor: R$22,00  |\n");
				printf("-------------------------------\n");
				printf("| 2 - Lasanha                 | Valor: R$20,00|\n");
				printf("-------------------------------\n");
				printf("| 3 - Maria Isabel com frango | Valor: R$15,00|\n");
				printf("-------------------------------\n");
				printf("| 4 - Panelada                | Valor: R$25,00|\n");
				printf("-------------------------------\n");
				printf("Escolha uma Refeicao: ");
				scanf("%d", &ref);
				printf("Informe a quantidade: ");
				scanf("%d", &produto[i].qtd);
				if(ref == 1){
					strcpy(produto[i].nome, "Bife com batata frita");
					produto[i].valor = 22.00 * produto[i].qtd;
					produto[i].codProd = i;
				}else if(ref == 2){
					strcpy(produto[i].nome, "Lasanha");
					produto[i].valor = 20.00 * produto[i].qtd;
					produto[i].codProd = i;
				}else if(ref == 3){
					strcpy(produto[i].nome, "Maria Isabel com frango");
					produto[i].valor = 15.00 * produto[i].qtd;
					produto[i].codProd = i;
				}else if(ref == 4){
					strcpy(produto[i].nome, "Panelada");
					produto[i].valor = 25.00 * produto[i].qtd;
					produto[i].codProd = i;
				}else{
					system("cls");
					printf("Escolha uma opcao valida!");
					return fpedido();
				}
				printf("\nVocê adicionou o item: %s com a quantidade de %d\n", produto[i].nome, produto[i].qtd);
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
				printf("| 2 - Suco Maracuja          | Valor: R$5,00  |\n");
				printf("-----------------------------\n");
				printf("| 3 - Cerveja (Skol, Brahma) | Valor: R$8,00  |\n");
				printf("-----------------------------\n");
				printf("| 4 - Agua com gas           | Valor: R$3,00  |\n");
				printf("-----------------------------\n");
				printf("Escolha uma Refeicao: ");
				scanf("%d", &optionDrink);
				printf("Informe a quantidade: ");
				scanf("%d", &produto3[i].qtd);
				if(optionDrink < 1 || optionDrink > 4){
					printf("Opcao invalida\n");
					bebidas();
				}
				else if(optionDrink == 1){
					strcpy(produto3[i].nome, "Coca-Cola");
					produto3[i].valor = 7.00 * produto3[i].qtd;
					produto3[i].codProd = i;
				}else if(optionDrink == 2){
					strcpy(produto3[i].nome, "Suco Maracuja");
					produto3[i].valor = 5.00 * produto3[i].qtd;
					produto3[i].codProd = i;
				}else if(optionDrink == 3){
					strcpy(produto3[i].nome, "Cerveja (Skol, Brahma)");
					produto3[i].valor = 8.00 * produto3[i].qtd;
					produto3[i].codProd = i;
				}else if(optionDrink == 4){
					strcpy(produto3[i].nome, "Agua com gas");
					produto3[i].valor = 3.00 * produto3[i].qtd;
					produto3[i].codProd = i;
				}
				else{
					system("cls");
					printf("Escolha uma opcao valida!");
					fpedido();
					return;
				}
				printf("\nVocê adicionou o item: %s com a quantidade de %d\n", produto3[i].nome, produto3[i].qtd);
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
				printf("Escolha uma Refeicao: ");
				scanf("%d", &deg);
				printf("Informe a quantidade: ");
				scanf("%d", &produto2[i].qtd);
				if(deg == 1){
					strcpy(produto2[i].nome, "Batata Frita");
					produto2[i].valor = 10.00 * produto2[i].qtd;
				}else if(deg == 2){
					strcpy(produto2[i].nome, "Enrolados de Carne");
					produto2[i].valor = 12.00 * produto2[i].qtd;
				}else if(deg == 3){
					strcpy(produto2[i].nome, "Enrolados de Presunto");
					produto2[i].valor = 12.00 * produto2[i].qtd;
				}else if(deg == 4){
					strcpy(produto2[i].nome, "Petisco Sacanagem");
					produto2[i].valor = 15.00 * produto2[i].qtd;
				}else{
					printf("Escolha uma opcao valida!");
					return fpedido();
				}
				printf("\nVoce adicionou o item: %s com a quantidade de %d\n", produto2[i].nome, produto2[i].qtd);
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

//Função de criação de alteração do pedido
int alterpedido(){
	printf("Alterar pedido");

}

//Função de criação de consultar pedido
int consulpedido(){
	int i;
	int retorno;
	printf("Seus pedidos \n\n");
	printf("Refeicoes: \n");
	for(i = 0; i < 10; i++){
		
		printf("%d %s | R$%.2f\n",produto[i].qtd, produto[i].nome, produto[i].valor);
	}
	printf("Degustacao: \n");
	for(i = 0; i < 10; i++){
		printf("%d %s | R$%.2f\n",produto2[i].qtd, produto2[i].nome, produto2[i].valor);
	}
	printf("Bebidas: \n");
	for(i = 0; i < 10; i++){
		printf("%d %s | R$%.2f\n",produto3[i].qtd, produto3[i].nome, produto3[i].valor);
	}

	//Soma dos valores da conta
	//printf("%.2f\n", produto[0].valor + produto[1].valor);
	float totalC = 0;
	float totalC2 = 0;
	float totalC3 = 0;

	for (i = 0; i < 10; i++)
	{
		totalC += produto[i].valor;
		totalC2 += produto2[i].valor;
		totalC3 += produto3[i].valor;

	}
	
	printf("Valor total %.2f\n", totalC + totalC2 + totalC3);

	printf("Pressione 0 para voltar!\n");
	scanf("%d", &retorno);
	system("cls");
	if(retorno != 0){
		system("cls");
		printf("Informe uma opcao valida!\n");
		consulpedido();
	}else{
		fpedido();
	}
}

int telaPrincipal(){
	int choice;
	printf("\n\n------------- MENU PRINCIPAL --------------\n");
	printf("| 1 - Fazer Pedido     | 2 - Alterar Pedido   |\n");
	printf("| 3 - Consultar Pedido | 4 - Finalizar Comanda|\n");
	printf("-----------------------------------------------\n");
	printf("Escolha uma opcao: ");
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
			float totalC = 0;
			float totalC2 = 0;
			float totalC3 = 0;
			int i;
			for (i = 0; i < 10; i++)
			{
				totalC += produto[i].valor;
				totalC2 += produto2[i].valor;
				totalC3 += produto3[i].valor;

			}
	
			system("cls");
			printf("Finalizando pedido...\n");
			printf("Inicio da sessao do pedido: %02d:%02d:%02d\n", timeinfo->tm_hour, timeinfo->tm_min, timeinfo->tm_sec);

			struct tm *timeinfo2;
			time_t time2;
			time2 = time(NULL);
			
			timeinfo2 = localtime(&time2);
			printf("Fim da sessao do pedido: %02d:%02d:%02d\n\n", timeinfo2->tm_hour, timeinfo2->tm_min, timeinfo2->tm_sec);
			printf("Valor total a ser pago: %.2f\n\n", totalC + totalC2 + totalC3);
			system("PAUSE");
			return 0;
			break;
		}
	}
}




