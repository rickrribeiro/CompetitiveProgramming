#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n, k, px, py;
    cin>>n>>k;
    cin>>px>>py;
    long long int pmaxx=px, pmaxy=py,pminx=px, pminy=py;
    for(int i=1;i<n;i++){
        cin>>px>>py;
        if(px>pmaxx){
            pmaxx=px;
        }else if(px<pminx){
            pminx=px;
        }
        if(py>pmaxy){
            pmaxy=py;
        }else if(py<pminy){
            pminy=py;
        }
    }
    pmaxx+=k;
    pminx-=k;
    pmaxy+=k;
    pminy-=k;
    px=pmaxx-pminx;
    py=pmaxy-pminy;
    cout<<px*py<<endl;
}