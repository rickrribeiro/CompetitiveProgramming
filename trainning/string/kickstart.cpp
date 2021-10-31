#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int t,n,d,c,m;
    cin>>t;
    for(long long int i=0;i<t;i++){
        cin>>n>>d>>c>>m;
        char animals[n];
        cin>>animals;
        for(long long int j =0; j<n;j++){
            if(d<0){
                break;
            }
            if(animals[j]=='D'){
                if(d==0 || c<0){
                    d=-1;
                    break;
                }else{
                    d--;
                    c+=m;
                }
            }else{
                if(animals[j]=='C'){
                    c--;
                }
            }
        }
        if(d<0){
                cout<<"Case #"<<i+1<<": NO"<<endl;
        }else{
             cout<<"Case #"<<i+1<<": YES"<<endl;
        }
    }
}