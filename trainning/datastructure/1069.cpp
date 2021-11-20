#include<bits/stdc++.h>
using namespace std;

int main(int argc, char *argbv[]){
	char a[1001];
	int n;
	cin>>n;
	int count1,count2;
	for(int i=0;i<n;i++){
		cin>>a;
		count1 =0;
		count2=0;
		for(int i=0; i<strlen(a);i++){
			if(a[i]=='<')count1++;
			if(a[i]=='>'){
				if(count1>count2){
					count2++;
				}	
			}
			
		}
		printf("%d\n",count2);
	}
	
	
}