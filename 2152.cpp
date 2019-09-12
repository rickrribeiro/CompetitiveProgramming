#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int qt;
	int hour, minute,open;
	cin>>qt;
	for(int i=0;i<qt;i++){
		cin>>hour>>minute>>open;
		if(open==1){
			printf("%02d:%02d - A porta abriu!\n", hour,minute);
		}else{
				printf("%02d:%02d - A porta fechou!\n", hour,minute);
		}
	
	}
}
