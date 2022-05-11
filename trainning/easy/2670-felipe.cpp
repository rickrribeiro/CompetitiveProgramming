#include <stdio.h>
#include <stdlib.h>

int main(){

	int a1,a2,a3,nAndar,n1Andar;
	int andar1 = 1, andar2 = 2, andar3 = 3;

	scanf("%d %d %d", &a1, &a2, &a3);

	if(a1 > a2 && a1 > a3){
		nAndar = abs(1 - 2) * 2 * a2;
		n1Andar = abs(1 - 3) * 2 * a3;
		printf("%d\n", nAndar + n1Andar);
	}else if(a2 > a1 && a2 > a3){
		nAndar = abs(2 - 1) * 2 * a1;
		n1Andar = abs(2 - 3) * 2 * a3;
		printf("%d\n", nAndar + n1Andar);
	}else{
		nAndar = abs(3 - 1) * 2 * a1;
		n1Andar = abs(3 - 2) * 2 * a2;
		printf("%d\n", nAndar + n1Andar);
	}
	return 0;

}