#include<bits/stdc++.h>

using namespace std;

int main(){
    char num[10000];
    cin>>num;
    int total=0;
    int aux =0;
    for(int i=strlen(num)-1;i>=3;i--){
        aux=(num[i]-'0')*(num[i-1]-'0')*(num[i-2]-'0')*(num[i-3]-'0');
        if(aux>total){
            total=aux;
        }
    }
    cout<<total<<endl;
}