#include<iostream>
#include<math.h>
using namespace std;

bool isPerfeito(int n){
	int aux = sqrt(n);
	if((aux*aux)==n){
		return true;
	}else{
		return false;
	}
}
    
int main() {
  int casos,n,t,flag;
  cin>>casos;
  for(int i=0;i<casos;i++){
  	cin>>n;
	if(n==1){
		cout<<1<<endl;
		continue;
	}
  	int mat[n] = {0};
  /*	for(int j=0;j<n;j++){
  		mat[n]=0;
	}*/
  	flag=0;
  	for(t=0;;t++){
  		for(int j=0;j<n;j++){
  			if(isPerfeito(mat[j]+t)==1){
				mat[j]=t;
				break;
			}  
  			if(mat[j]==0){
  				mat[j]=t;
  				break;
			  }	
			  if(j==n-1){
			  	flag=1;
			  }
			 
		}
		
		if(flag==1)break;
	}
	cout<<t-1<<endl;
  }
}
