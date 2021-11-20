#include<bits/stdc++.h>
using namespace std;

int c[2500];
map<int,int> valores;
int maxVal[2500][2500];//tamanho corte e tamanho restante

int maxi(int a, int b, int c, int d);

int dp(int idx, int tam){
    if(idx==-1){
        return 0;
    }else if(c[idx]>tam && idx==0){
        
        return 0;
    }else if(c[idx]>tam && idx!=0){
        return dp(idx-1,tam);
    }else if(maxVal[idx][tam]>=0){
        return maxVal[idx][tam];
    }
    
    int maxv = maxi(valores[c[idx]],valores[c[idx]]+dp(idx-1, tam-c[idx]),dp(idx-1,tam),valores[c[idx]]+dp(idx,tam-c[idx]));
    maxVal[idx][tam]=maxv;
    return maxv;
}

int main(){
    int n,t,aux;
    while(cin>>n>>t){
    memset(maxVal, -1, sizeof(maxVal));
    
    
    for(int i=0;i<n;i++){
        cin>>c[i]>>aux;
        if(valores[c[i]]!=0){
            if(valores[c[i]]<aux){
                valores[c[i]]=aux;
            }
        }else{
            valores[c[i]]=aux;
        }
    }
    sort(c,c+n);
    
    int res = dp(n-1,t);
    cout<<res<<endl;
    }
}

int maxi(int a, int b, int c, int d) //valor maximo
{
    if(a>=b && a>=c && a>=d){
        return a;
    }else if(b>=a && b>=c && b>=d){
        return b;
    }else if(c>=a && c>=b && c>=d){
        return c;
    }else{
        return d;
    }
}