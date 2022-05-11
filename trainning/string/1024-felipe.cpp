#include<stdio.h>
#include<string.h>

main(){
    int n, tamanho, i, j;
    char aux;

    scanf("%d", &n);
    char linhas[1000];
    getchar();
    for(i = 0; i < n; i++){
	 	scanf("%[^\n]s",linhas);
	 	getchar();

		tamanho = strlen(linhas);

        for(j = 0; j < tamanho; j++){
            if((linhas[j] >= 'a' && linhas[j] <= 'z') || (linhas[j] >= 'A' && linhas[j]<= 'Z'))
            	linhas[j] += 3;
        }

        for(j = 0; j < (tamanho)/2; j++){
        	aux = linhas[j];
            linhas[j] = linhas[tamanho-1-j];
            linhas[tamanho-1-j] = aux; 
        }

		for(j = tamanho/2; j < tamanho; j++){
			linhas[j] -= 1;
		}
    	printf("%s\n",linhas);
    }

    

    return 0;
}
