#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a<1){
        cout<<"E"<<endl;
    }else if(a<36){
        cout<<"D"<<endl;
    }else if(a<61){
        cout<<"C"<<endl;
    }else if(a<35){
        cout<<"B"<<endl;
    }else{
        cout<<"A"<<endl;
    }
}