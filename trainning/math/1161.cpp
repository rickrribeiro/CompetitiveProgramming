#include<bits/stdc++.h>

using namespace std;

long long int fatorial(int n){
    if(n==0){
        return 1;
    }else{
        return n*fatorial(n-1);
    }
}

int main(){
    long long int a,b;
    while(cin>>a>>b){
        cout<<fatorial(a)+fatorial(b)<<endl;
    }
}