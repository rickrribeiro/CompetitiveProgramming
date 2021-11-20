#include<bits/stdc++.h>

using namespace std;


int main(){
//FILE *fp = fopen("1034.txt", "w+");
int n;
cin>>n;
int qt,sizeAux,aux,tot,best,size;
vector<int> valores;
for(int i=0;i<n;i++){
	
	best = 99999;
	cin>>qt>>size;
	for(int j=0;j<qt;j++){
		cin>>aux;
		valores.push_back(aux);
	}
	sort(valores.begin(), valores.end());
	for(int k=1;k<valores.size();k++){
		tot=0;
		sizeAux = size;
		for(int j=valores.size()-k;j>=0;j--){
			if(valores[j]>sizeAux){
				continue;
			}
			tot+=sizeAux/valores[j];
			sizeAux= sizeAux%valores[j];
			if(sizeAux==0){
				break;
			}
		}
		if(tot<best){
			best=tot;
		
		}else{
			break;
		}
		
	}
	cout<<best<<endl;
	//fprintf(fp,"%d\n",best);
	valores.clear();
}


}
