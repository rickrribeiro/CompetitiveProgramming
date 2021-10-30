#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,d,m;
    cin>>t>>d>>m;
    if(t>d){
        cout<<"N"<<endl;
        return 0;
    }
    long long int aux;
    long long int minatual =0;
    for(int i=0;i<m;i++){
        cin>>aux;
        if(aux-minatual>=t){
            cout<<"Y"<<endl;
            return 0;
        }
        minatual = aux;
    }
    if(d-minatual >=t){
        cout<<"Y"<<endl;
    }else{
        cout<<"N"<<endl;
    }
}