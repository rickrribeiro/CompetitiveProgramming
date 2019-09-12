#include<stdio.h>

int main(){
	int T,n,i,qtPedidos;
	while(scanf("%d", &T) && T!=0){
		for(i=0;i<T;i++){
			scanf("%d",&n);
			if(n%2==0){
				qtPedidos=(n-2)*2+2;
			}else{
				qtPedidos=(n-1)*2+1;
			}
			printf("%d\n",qtPedidos);
		}
		
		
	}
	
}
