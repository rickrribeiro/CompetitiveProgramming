#include<bits/stdc++.h>
using namespace std;


int main(){
    long long int n,k;
    cin>>n>>k;
    long long int num[n];
    long long int cor[n];
    
    for(long long int i=0;i<n;i++){
        cin>>num[i]>>cor[i];
    }
    int res = 1;
    for(long long int i=0;i<n-1;i++){
        if(num[i]!=i+1){

            if(cor[i]!=cor[num[i]-1]){
                res=0;
                break;
            }
        }
    }
    if(res==1){
        cout<<"Y"<<endl;
    }else{
        cout<<"N"<<endl;
    }
}

