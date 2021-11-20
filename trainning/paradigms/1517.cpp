#include<bits/stdc++.h>

using namespace std;

int maxi(int a, int b) //valor maximo
{
    if(a>=b ){
        return a;
    }else{
        return b;
    }
}

int x[1001],y[1001],t[1001];
int memo[21][21][2001];
int dp(int px, int py, int idx){
    if(idx<0){
        return 0;
    }
    if(memo[px][py][idx]>=0){
        return memo[px][py][idx];
    }
    float menorCaminho;
    // if(px==x[idx] || py == y[idx]){

    //     int a = px-x[idx];
    //     if(a<0){
    //         a*=-1;
    //     }
    //     int b = py-y[idx];
    //     if(b<0){
    //         b*=-1;
    //     }
    //     menorCaminho = a>b?b:a;
    //}else{
        menorCaminho = trunc(sqrt(pow(px-x[idx],2)+pow(py-y[idx],2)));
    //}
 
    if(menorCaminho>t[idx]){
        //cout<<"NPassou: ";
        return dp(px,py,idx-1);
    }
    
    //cout<<"Passou: ";
    
    //cout<<x[idx]<<" a "<<y[idx]<<" a "<<idx<<endl;
    int res= maxi(1+dp(x[idx],y[idx],idx-1),dp(px,py,idx-1));
    memo[px][py][idx] = res;
    //cout<<px<<"-"<<py<<"-"<<x[idx]<<"-"<<y[idx]<<"-"<<":::"<<t[idx]<<" |||||| "<<res<<" "<<endl;
    return res;
}

int main(){
    int n,m,k;
    ofstream myfile;
    myfile.open ("saida1517.txt");
    while(cin>>n>>m>>k && n!=0){
        
        int xi,yi;
        for(int i=k-1;i>=0;i--){
            cin>>x[i]>>y[i]>>t[i];
        }
        // for(int i=0;i<k;i++){
        //     cin>>x[i]>>y[i]>>t[i];
        // }
        cin>>xi>>yi;
        memset(memo,-1,sizeof(memo));
        
        int res = dp(xi,yi,k-1);
        cout<<res<<endl;
        myfile<<res<<endl;
    }
}