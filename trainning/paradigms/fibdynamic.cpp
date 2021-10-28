#include<bits/stdc++.h>

using namespace std;

map<int,int> valores;

int fib(int n){
	int f;
	if(valores[n]){
		return valores[n];
	}
	if(n<=2){
		f=1;
	}else{
		f= fib(n-1)+fib(n-2);
	}
	valores[n]=f;
	return f;
}


int main(){
	
	
	int n;
	cin>>n;
	cout<<"0";
	for(int i=1;i<n;i++){
		cout<<" "<<fib(i);
	}
	cout<<endl; 


}
