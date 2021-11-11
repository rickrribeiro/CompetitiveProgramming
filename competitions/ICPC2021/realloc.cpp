#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int informaTamanho(int *n){
    printf("Informe o n�mero de posi��es do vetor: ");
    scanf("%d", n);
    return *n;
}
void entrada(int *vetor, int *size, int *tamanho){
    //srand(time(NULL));
    for(int i = *tamanho; i < *size; i++){
        printf("\n\nInforme o %d.o valor <Posi��o[%d]>: ", i+1, i);
        scanf("%d", &vetor[i]);
        //vetor[i] = rand() % 100;
    }
}
int imprimir(int *vetor, int *size){
    int i;
    for(i = 0; i < *size; i++){
        printf("\n\nPosi��o[%d]: %d ", i, vetor[i]);
    }
    return 0;
}
int liberarMemoria(int *vetor){
     free(vetor);
    return 0;
}
int main(){
    int *v, i, n, m, tamanho = 0;// 'n' = n�mero de posi��o inicial; 'm' = n�mero de novas posi��es;
    srand(time(NULL));

    // printf("Informe o n�mero de posi��es do vetor: ");
    // scanf("%d", &n);
    informaTamanho(&n);
    v = (int*)malloc(sizeof(int) * n);
    printf("\nO valor informado para o vetor foi: %d\n\n", n);
    entrada(v, &n, &tamanho);
    imprimir(v, &n);
    printf("\nInforme um novo tamanho de mem�ria: ");
    scanf("%d", &m);
    v = (int*)realloc(v, sizeof(int) * m);
    entrada(v, &m, &n);
    imprimir(v, &m);
    liberarMemoria(v);
    printf("\n\nMem�ria limpa!");
    imprimir(v, &m); // verificando se limpou o espa�o
    return 0;
}
