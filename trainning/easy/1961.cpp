#include<stdio.h>

main(){

	int alturaPulo,nCanos,i,j;

	scanf("%d %d", &alturaPulo, &nCanos);
	int alturaCanos[nCanos];

	for(i = 0; i < nCanos; i++){
		scanf("%d", &alturaCanos[i]);
	}

	for(j = 0; j < nCanos-1; j++){ 
		if((alturaCanos[j + 1] > alturaPulo + alturaCanos[j]) || (alturaCanos[j + 1] < alturaCanos[j] - alturaPulo)){
			printf("GAME OVER\n");
			return 0;
		}

	}

	printf("YOU WIN\n");
	return 0;
}