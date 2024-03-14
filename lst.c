// IMPLEMENTAÇÃO

#include <stdio.h>
#include <stdlib.h>
#include "lst.h"


void criarLista(Lista* L){
	L->fim = 0;
	printf("Lista inicializada com sucesso!\n");
}
int vazia(Lista L){
	return(L.fim == 0);
}
int cheia(Lista L){
	return(L.fim == MAX);
}

void inserir(Lista* L, int item, int pos){
	if(cheia(*L) || pos < 0 || pos > L->fim){
		printf("NAO foi possivel inserir o item %d\n", item);
	}else{
		int i;
		for(i=L->fim; i > pos; i--){
			L->itens[i] = L->itens[i-1];
		}
		L->itens[pos] = item;
		L->fim++;
		printf("%d inserido na posicao %d\n", item, pos);
	}
}

void remover(Lista* L, int pos){
	if(vazia(*L) || pos < 0 || pos >= L->fim){
		printf("NAO foi possivel remover o item da posicao %d\n", pos);
	}else{
		int i;
		for(i = pos; i < L->fim - 1; i++){
			L->itens[i] = L->itens[i+1];
		}
		L->fim--;
		printf("O elemento da posicao %d foi removido!\n", pos);
	}
}

void mostrar(Lista L){
	int i;
	printf("L:[ ");
	for(i = 0; i < L.fim; i++){
		printf("%d ", L.itens[i]);
	}
	printf("]\n");
}

void showItens(Lista L){	
	if (L.fim <= 1){
		printf("Existe %d elemento na lista\n", L.fim);
	} else {
		printf("Existem %d elementos na lista\n", L.fim);
	}
}

void elementoPos(Lista L, int pos){
	(pos >= 0 && pos < L.fim) ? printf("O elemento da posicao %d eh %d\n", pos, L.itens[pos]) : printf("Sem elemento nesta posicao");
}

void posicaoItem(Lista L, int item){
	int i;
	for (i = 0; i < L.fim; i++){
		if (L.itens[i] == item){
			printf("O elemento %d esta na posicao %d\n", item, i);
			return;
		}
	}
	printf("O elemento %d nao encontrado\n", item);	
}

void esvaziarLista(Lista* L){
	while (!vazia(*L)){
		remover(L, 0);
	}
	free(L->itens);
	L->fim = 0;
	printf("\nLista esvaziada.\n");
}