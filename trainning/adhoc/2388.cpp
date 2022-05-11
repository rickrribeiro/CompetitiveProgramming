#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, total=0, aux1, aux2;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>aux1>>aux2;
        total+=(aux1*aux2);
    }
    cout<<total<<endl;
}