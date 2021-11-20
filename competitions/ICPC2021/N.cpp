#include<bits/stdc++.h>

using namespace std;



int main(){
    long long int y,n;
    cin>>y>>n;
    long long int vagas[y];
    for(long long int i=0;i<y;i++){
        cin>>vagas[i];
    }
    long long int a[n],b[n],c[n];
    long long int aux;
    for(long long int i=0;i<n;i++){
        aux=0;
        cin>>a[i]>>b[i]>>c[i];
        if(vagas[a-1]<b){
            
            for(long long int j=0;j<c;j++){
                if(vagas[a+j]>=b){
                    aux++;
                }
                
            }
        }
        cout<<aux<<endl;
    }
}