#include <stdio.h>
#include <stdlib.h>
#include "lst.h"

void menu(){
	printf("[1] - Criar uma lista.\n");
	printf("[2] - Verificar se esta VAZIA ou CHEIA.\n");
	printf("[3] - Insirir elemento na lista.\n");
	printf("[4] - Remover elemento da lista.\n");
	printf("[5] - Mostrar lista.\n");
	printf("[6] - Mostrar quantidade de elementos na lista.\n");
	printf("[7] - Procurar elemento pela posicao.\n");
	printf("[8] - Procurar a posicao pelo elemento.\n");
	printf("[9] - Apagar lista.\n");
	printf("[0] - Sair.\n");
	printf("Opcao: ");
}

int main() {
	Lista numeros;
	int op;
	
	menu(); scanf("%d", &op);
	while(1){
		switch(op){
			case 1:
				system("cls");
				criarLista(&numeros);
				system("pause");
				break;
			case 2:
				system("cls");
				printf("Lista vazia?: %d\n", vazia(numeros));
				printf("Lista cheia?: %d\n", cheia(numeros));
				system("pause");
				break;
			case 3:
				system("cls");
				int elemento, posicao;
				printf("Insirir elemento: "); scanf("%d", &elemento);
				printf("Posicao do elemento: "); scanf("%d", &posicao);
				inserir(&numeros, elemento, posicao);
				system("pause");
				break;
			case 4:
				system("cls");
				int apagar;
				printf("Que elemento quer remover usando a posicao: "); scanf("%d", &apagar);
				remover(&numeros, apagar);
				system("pause");
				break;
			case 5:
				system("cls");
				mostrar(numeros);
				system("pause");
				break;
			case 6:
				system("cls");
				showItens(numeros);
				system("pause");
				break;
			case 7:
				system("cls");
				int pos;
				printf("Que posicao quer retonar: "); scanf("%d", &pos);
				elementoPos(numeros, pos);
				system("pause");
				break;
			case 8:
				system("cls");
				int item;
				printf("Que elemento quer retonar a posicao: "); scanf("%d", &item);
				posicaoItem(numeros, item);
				system("pause");
				break;
			case 9:
				system("cls");
				esvaziarLista(&numeros);
				system("pause");
				break;
			case 0:
				system("cls");
				printf("Saindo!");
				system("pause");
				break;
			default:
				system("cls");
				printf("Opcao invalida!");
				system("pause");
				break;
		}
		
		if (op == 0){
			break;
		}
		
		system("cls");
		menu(); scanf("%d", &op);
	}

	return 0;
}

