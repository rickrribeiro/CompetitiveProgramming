#include<bits/stdc++.h>

using namespace std;

int main(){

    long long int a,b,c,d;
    cin>>a>>b>>c>>d;
    
    long long int i  =0;
    for(i=a;i<=sqrt(c);i+=a){
        if(i%b!=0 && c%i==0 && d%i!=0){
           break;
        }
        
    }
    if(i>sqrt(c)){
        i=c/2;
        if(i%b!=0 && c%i==0 && d%i!=0 && i%2==0){
           cout<<i<<endl;
        }else{
             i=c;
            if(i%b!=0 && c%i==0 && d%i!=0){
            cout<<i<<endl;
            }else{
                cout<<"aa"<<endl;
            }
        }

    }else{
        cout<<i<<endl;
    }
}