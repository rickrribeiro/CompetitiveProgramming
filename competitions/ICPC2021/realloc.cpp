#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int informaTamanho(int *n){
    printf("Informe o número de posições do vetor: ");
    scanf("%d", n);
    return *n;
}
void entrada(int *vetor, int *size, int *tamanho){
    //srand(time(NULL));
    for(int i = *tamanho; i < *size; i++){
        printf("\n\nInforme o %d.o valor <Posição[%d]>: ", i+1, i);
        scanf("%d", &vetor[i]);
        //vetor[i] = rand() % 100;
    }
}
int imprimir(int *vetor, int *size){
    int i;
    for(i = 0; i < *size; i++){
        printf("\n\nPosição[%d]: %d ", i, vetor[i]);
    }
    return 0;
}
int liberarMemoria(int *vetor){
     free(vetor);
    return 0;
}
int main(){
    int *v, i, n, m, tamanho = 0;// 'n' = número de posição inicial; 'm' = número de novas posições;
    srand(time(NULL));

    // printf("Informe o número de posições do vetor: ");
    // scanf("%d", &n);
    informaTamanho(&n);
    v = (int*)malloc(sizeof(int) * n);
    printf("\nO valor informado para o vetor foi: %d\n\n", n);
    entrada(v, &n, &tamanho);
    imprimir(v, &n);
    printf("\nInforme um novo tamanho de memória: ");
    scanf("%d", &m);
    v = (int*)realloc(v, sizeof(int) * m);
    entrada(v, &m, &n);
    imprimir(v, &m);
    liberarMemoria(v);
    printf("\n\nMemória limpa!");
    imprimir(v, &m); // verificando se limpou o espaço
    return 0;
}
