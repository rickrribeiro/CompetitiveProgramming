#include<bits/stdc++.h>
using namespace std;
vector<long long int> M;

//dp();

int main(){

    long long int n,f;
    cin>>n>>f;
    long long int aux;
    for(long long int i=0;i<n;i++){
        cin>>aux;
        M.push_back(aux);
    }
    sort(M.begin(), M.end());
    long long int tot =0;
    for(long long int i =0;i<M.size();i++){  
        if(f>M[i]){
            tot++;
            f += trunc(M[i]/2);
        }
    }
    cout<<tot<<endl;
}