#include<stdio.h>

int main(){
	char tab[9][10];
	int n,i,j,aux;
	while(scanf("%d", &n)!=EOF){
		for(i=0;i<8;i++){
			
			for(j=0;j<9;j++){
				
				if(i==2 || i==1){
					tab[i][j]='0';
				}
				else{
					tab[i][j]='1';
				}
			}	
		}
	
	for(j=8; ;j--){
		aux=n%10;
	
		if(aux==1){
			tab[2][j]='1';
			tab[3][j]='0';
		}
		if(aux==2){
			tab[2][j]='1';
			tab[3][j]='1';
			tab[4][j]='0';
		}
		if(aux==3){
			tab[2][j]='1';
			tab[3][j]='1';
			tab[4][j]='1';
			tab[5][j]='0';
		}
		if(aux==4){
			tab[2][j]='1';
			tab[3][j]='1';
			tab[4][j]='1';
			tab[5][j]='1';
			tab[6][j]='0';
		}
		
		if(aux==5){
			tab[0][j]='0';
			tab[1][j]='1';
		}
		
		if(aux==6){
			tab[0][j]='0';
			tab[1][j]='1';
			tab[2][j]='1';
			tab[3][j]='0';
		}
		if(aux==7){
			tab[0][j]='0';
			tab[1][j]='1';
			tab[2][j]='1';
			tab[3][j]='1';
			tab[4][j]='0';
		}
		if(aux==8){
			tab[0][j]='0';
			tab[1][j]='1';
			tab[2][j]='1';
			tab[3][j]='1';
			tab[4][j]='1';
			tab[5][j]='0';
		}
		if(aux==9){
			tab[0][j]='0';
			tab[1][j]='1';
			tab[2][j]='1';
			tab[3][j]='1';
			tab[4][j]='1';
			tab[5][j]='1';
			tab[6][j]='0';
		}	
		
		n=n/10;
		if(n==0){
			break;
		}
	}

	
		for(i=0;i<7;i++){
			if(i==2){
				printf("---------\n");
			}
		
				for(j=0;j<9;j++){
										
						printf("%c",tab[i][j]);
				
				}	
			
			printf("\n");
		}
		printf("\n");
	}
}
