#include<stdio.h>

int main(int argc, char *argv[]){
	
	int N,i,j;
	float C;
	scanf("%d", &N);
	for(i=0;i<N;i++){
		fflush(stdin);
		scanf("%f", &C);
		for(j=0; ;j++){
			if(C<=1){
				break;
			}
			C=C/2;
		}
		printf("%d dias\n", j);
		
		
	}
	
}