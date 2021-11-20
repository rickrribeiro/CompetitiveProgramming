#include<iostream>

using namespace std;

int main(){
	int r[5];
	int aux;
	char res;
    	int n;
	while(cin>>n && n!=0){
		for(int i=0;i<n;i++){
			res='1';
			for(int j=0;j<5;j++){
				cin>>aux;
				if(aux<=127 && res=='1'){
					res='A'+j;
				}else if(aux<=127 && res!='1'){
					res='*';
				}
			}
			if(res=='1'){
				cout<<'*'<<endl;
			}else{
				cout<<res<<endl;
			}  
			
		}
		      
	}
   
            
         
}