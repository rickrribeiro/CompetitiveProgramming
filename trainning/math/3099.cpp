#include<bits/stdc++.h>

using namespace std;


int main(){
	long long int aux,tot=0,aux2;
	for(int n=1;n<120;n++){
	
	tot=0;
		for(long long int i=1;i<=n;i++){
			aux=i;
			do{
				aux2=aux%10;
				if(aux2==7|| aux2==1){ 
					tot++;
				}
				aux/=10;
				
			}while(aux>0);
		}
		cout<<tot<<endl;
	}
}

//colcar DP
