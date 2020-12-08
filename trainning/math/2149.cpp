#include<bits/stdc++.h>

using namespace std;


int main(){
	long long int a,b=1,c=1,aux,result;
	while(cin>>a){
			b=1;
			c=1;
			if(a==1){
				cout<<0<<endl;
				continue;
			}else if(a==2 || a==3 || a==4){
				cout<<1<<endl;
				continue;
			}
			for(int i=5;i<=a;i++){
				if(i%2==0){
					result = b*c;
					aux=b;
					b=c;
					c=aux*c;
				
				}else{
					result = b+c;
					aux=b;
					b=c;
					c=aux+c;
				}
			}
			cout<<result<<endl;
		
	}

}


