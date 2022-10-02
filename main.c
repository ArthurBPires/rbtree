#include <stdio.h>
#include <stdlib.h>
#include "RN.h"
#include <time.h>

#define DATA_SIZE 160000

int main()
{
    RNtree* arv = NULL;
    long int i;
    static long int data[DATA_SIZE];
    clock_t start, end;
    for(i=0;i<DATA_SIZE;i++)    //Geração de dados ordenados
        data[i]=i;
    printf("Inserindo dados ordenados na arvore Rubro-Negra...\n");

    cmp = 0;
    start = clock();
    for(i=0;i<DATA_SIZE;i++)    //Inserindo informação na árvore
        arv = Insere(arv,data[i]);
    end = clock();

    printf("Insercao finalizada em %.5lf segundos e com %ld comparacoes\n", (double)(end - start)/ CLOCKS_PER_SEC, cmp);
    return 0;
}
