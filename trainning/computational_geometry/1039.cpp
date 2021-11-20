#include<bits/stdc++.h>

using namespace std;



int main(){

	int r1,x1,y1,r2,x2,y2;
	float dis;
	while(cin>>r1>>x1>>y1>>r2>>x2>>y2){
	
		dis = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
	//	cout<<dis<<endl;
		if(dis<= (r1-r2)){
			cout<<"RICO"<<endl;
		}else{
			cout<<"MORTO"<<endl;
		}

	}


}