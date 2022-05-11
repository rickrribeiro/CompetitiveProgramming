#include<stdio.h>
#include<string.h>
main()
{
    int cont, N, cont2;
    bool newLine = false;
    while(scanf("%d", &N) && N!=0){
        int quant[N], maior=0, espacos;
        char nomes[N][51];
        //pegar as palavras
        for(cont=0; cont<N; cont++){
            scanf("%s", nomes[cont]);
            quant[cont]=strlen(nomes[cont]);
            maior = maior<strlen(nomes[cont])?strlen(nomes[cont]):maior;
        }
        //colocar o \n entre os casos de teste. Verifica se é o primeiro
        if(newLine){
            printf("\n");
        }else{
            newLine = true;
        }
        //imprimir as strings já com espaço
        for(cont=0; cont<N; cont++){
            espacos=maior-quant[cont];
            for(cont2=0; cont2<espacos; cont2++)
                printf(" ");
            printf("%s\n", nomes[cont]);
        }
       
    }
    return 0;
}
