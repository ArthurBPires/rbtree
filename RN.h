#include <stdio.h>
#include <stdlib.h>

typedef struct  RNnodo RNtree;

extern long int cmp;

struct RNnodo {
  long int key;
  int red; /* se red=0 então o nodo é preto */
  struct RNnodo* esq;
  struct RNnodo* dir;
  struct RNnodo* pai;
};

// declarar o nodo NULL
static RNtree* NodoNULL = NULL;



// Definições das Funções
RNtree* Insere(RNtree* t, long int key);
int Consulta(long int X, RNtree* T );
RNtree* Remove(RNtree* t, long int key);
void Destroi(RNtree* t);

// Funções Auxiliares
RNtree* VerificaRN(RNtree* t, long int key);
RNtree* RotacaoSimplesEsq(RNtree* t);
RNtree* RotacaoSimplesDir(RNtree* t);
void Desenha(RNtree* t , int nivel);
RNtree* Maior(RNtree* t);
RNtree* Menor(RNtree* t);

