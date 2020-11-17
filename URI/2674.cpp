#include<bits/stdc++.h>

using namespace std;

int primo(int num){
	if(num==1 || num == 0){
		return 0;
	}
	for(int i=2;i<=sqrt(num);i++){
		if(num%i==0){
		 	return 0;
		}
	}
	return 1;
}

int main(){
	long long int a,aux,is;
	while(cin>>a){
		if(primo(a)==0){
			printf("Nada\n");
		}else{
			is=0;
			do{
				aux=a%10;
				a/=10;
				if(aux==4 || aux==6 || aux==8 || aux == 9 || aux == 0 || aux==1){ 
					is=1;
					break;
				}
			}while(a>0);
			if(is==1){
				cout<<"Primo"<<endl;
			}else{
				cout<<"Super"<<endl;
			}
		}
	}

}
