#include <bits/stdc++.h>

using namespace std;


int main() {
	int n,dinheiro,ing,bolos,menor,qtIng,a,b;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>dinheiro>>ing>>bolos;
		int valBolos[bolos] = {0};
		int precos[ing];
		for(int j=0;j<ing;j++){
			cin>>precos[j];
		}
		for(int j=0;j<bolos;j++){
			cin>>qtIng;
			for(int k=0;k<qtIng;k++){
				cin>>a;
				cin>>b;
				valBolos[j]+=precos[a]*b;
			}
		}
		
		
		menor=valBolos[0];
		for(int j=0;j<bolos;j++){
			if(valBolos[j]<menor){
				menor=valBolos[j];
			}
		}
		cout<<dinheiro/menor<<endl;
	}
    
    return 0;
}
