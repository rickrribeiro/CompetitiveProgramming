#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main(){
	int N;
	char *p;
	char t[33],*tt1;
	tt1=(char*)malloc(33*sizeof(char));
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>t>>tt1;
		p=strstr(t,tt1);
		while(true){
			
			if(p==NULL){
					cout<<"nao encaixa"<<endl;
					break;
			}
			if(strcmp(p,tt1)==0){
				cout<<"encaixa"<<endl;
				break;
			}else{
				p++;
				p=strstr(p,tt1);

				
			}
			
		}

	}

}