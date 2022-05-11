#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    char a[10];

    while(cin>>n>>a){
        int total = 0;
        for(int i=0;i<n;i++){
            total+=a[i]-'0';
        }
        if(total%3==0){
            cout<<total<<" sim"<<endl;
        }else{
             cout<<total<<" nao"<<endl;
        }
    }
}