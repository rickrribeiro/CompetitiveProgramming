#include<stdio.h>

int main(){
	int qt, i,jog1=0,jog2=0,rod1,rod2;
	scanf("%d", &qt);
	do{
		for(i=0;i<qt;i++){
			scanf("%d %d", &rod1, &rod2);
			if(rod1>rod2){
				jog1++;
			}
			if(rod2>rod1){
				jog2++;
			}
		}
		
		printf("%d %d\n", jog1,jog2);
		jog2=0;
		jog1=0;
		scanf("%d", &qt);
	}while(qt!=0);
}
