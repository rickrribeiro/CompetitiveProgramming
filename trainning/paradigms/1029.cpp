#include<iostream>
using namespace std;
int call;
int fib(int i){
	if(i>1){
		
		call+=2;
	return  fib(i-1) + fib(i-2);
	}
	//call++;
	return i;
}


int main(int argc, char*argv){
	
	int n,i;
	
	cin>>n;
	for(int j=0;j<n;j++){
		cin>>i;
	call=0;
		cout<<"fib("<<i<<") = "<<call<<" calls = "<<fib(i)<<endl;
		
	}	
	
	
	
}
