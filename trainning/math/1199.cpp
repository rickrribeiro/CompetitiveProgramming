#include<bits/stdc++.h>

using namespace std;

long long int hextoint(){
	
}

int main(int argc, char *argv[]){
	char a[100],*p;
	long long int b;

	while(cin>>a && a[0]!='-'){
		
		p=strstr(a,"x");
		if(p!=NULL){
			b=strtol(a, NULL, 16);
			cout<<b<<endl;
			
		}else{
			
			printf("0x%X\n",atoi(a));
		}
	}
	
}