#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,a,b,aux;
    cin>>n;
    for(long long int i=0;i<n;i++){
        cin>>a>>b;
        if(a==0){
            cout<<"Alice"<<endl;
            continue;
        }
        if(a<=b){
            cout<<"Bob"<<endl;
            continue;
        }
        aux = trunc(a/b);
        long long int restou = a%b;
        if(aux%2==0){
            if( b-restou<=1){
               
                cout<<"Alice"<<endl;
            }else{
                
                cout<<"Bob"<<endl;
            }
        }else{
            if( b-restou<=1){
               
                cout<<"Bob"<<endl;
            }else{
                
                cout<<"Alice"<<endl;
            }
        }
    }
}