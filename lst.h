//INTERFACE

#define MAX 6

typedef struct {
	int itens[MAX];
	int fim;
} Lista;

void criarLista(Lista* L);
int vazia(Lista L);
int cheia(Lista L);
void inserir(Lista* L, int item, int pos);
void remover(Lista* L, int pos);
void mostrar(Lista L);
void showItens(Lista L);
void elementoPos(Lista L, int pos);
void posicaoItem(Lista L, int item);
void esvaziarLista(Lista* L);