#include<bits/stdc++.h>

using namespace std;

int main(){
    unsigned long long int n;
    unsigned long long int l,r,k,qntdQM,pQM, ini;
    cin>>n;
    while(n>0){

    n-=1;
    cin>>l>>r>>k;
    qntdQM = 0;
    if(k>r){
        cout<<0<<endl;
    }
    else if(l>=k){

        pQM = l%k;
        if(pQM != 0){
            ini = (l-pQM) + k;
        }
        else{
            ini = l;
        }
        qntdQM = 1+trunc((r-ini)/k);
        cout<<qntdQM<<endl;
    }
    else if(k>l){

        ini = k;
        qntdQM = trunc(r/k);
        cout<<qntdQM<<endl;
    }
    }
}

