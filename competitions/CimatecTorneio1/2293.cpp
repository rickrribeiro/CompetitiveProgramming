#include<bits/stdc++.h>

using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    int matriz[x][y];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>matriz[i][j];
        }
    }
    long int maior=0;
    for(int i=0;i<x;i++){
        int aux =0;
        for(int j=0;j<y;j++){
            aux+=matriz[i][j];
        }
        if(aux>maior){
            maior=aux;
        }
    }

    for(int j=0;j<y;j++){
        int aux =0;
        for(int i=0;i<x;i++){
            aux+=matriz[i][j];
        }
        if(aux>maior){
            maior=aux;
        }
    }

    cout<<maior<<endl;
}