#include <bits/stdc++.h>
 
using namespace std;
 
int main() {

	int n,qt,pg,pr,pb;
	char T1,T2;
	cin>>n;
	for(int i =0;i<n;i++){
		pg=0;
		pr=0;
		pb=0;
		cin>>qt;
		for(int j =0;j<qt;j++){
			cin>>T1>>T2;
		//	cout<<"T1 e T2"<<T1<<T2<<endl;
			if(T1=='G' && T2=='R'){
				pg+=1;
			}else if(T1=='G' && T2=='B'){
				pg+=2;
			}else if(T1=='R' && T2=='G'){
				pr+=2;
			}else if(T1=='R' && T2=='B'){
				pr+=1;
			}else if(T1=='B' && T2=='R'){
				pb+=2;
			}else if(T1=='B' && T2=='G'){
				pb+=1;
			}
		}
		//cout<<pb<<" "<<pr<<" "<<pg<<endl;
		if(pb>pg && pb>pr){
			cout<<"blue"<<endl;
		}else if(pg>pb && pg>pr){
			cout<<"green"<<endl;
		}else if(pr>pg && pr>pb){
			cout<<"red"<<endl;
		}else if(pb==pg && pb==pr){
			cout<<"trempate"<<endl;
		}else{
			cout<<"empate"<<endl;
		}
	}	
    return 0;
}
