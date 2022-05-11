#include<bits/stdc++.h>

using namespace std;

int main(){
    long int n;

    long int aux;
    char nome[100];
    while(cin>>n){
        long int totalEPR =0,totalEHD =0 ;
        for(long int i=0;i<n;i++){
            cin>>aux>>nome;
            if(strcmp(nome,"EPR")==0){
                totalEPR++;
            }else if(strcmp(nome,"EHD")==0){
                totalEHD++;
            }
        }
        cout<<"EPR: "<<totalEPR<<"\n"<<"EHD: "<<totalEHD<<"\n"<<"INTRUSOS: "<<n-totalEPR-totalEHD<<endl;
    }
}