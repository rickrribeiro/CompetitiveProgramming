#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int a,b,carry;
	while(cin>>a>>b && a!=0 && b!=0){
		carry=0;
		while(a!=0 || b!=0){
			if((a%10 + b%10)>=10){
				carry++;
			
				a+=10;
			}
				a=a/10;
				b=b/10;
		}
		if(carry>0){
			if(carry==1){
					cout<<carry<<" carry operation."<<endl;
			}else{
					cout<<carry<<" carry operations."<<endl;
			}
		}else{
			cout<<"No carry operations."<<endl;
		}
	}
}