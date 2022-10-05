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
			fpedido();
			break;
		}
	}
}

//Função para criação do Pedido
void fpedido(){
	
}
