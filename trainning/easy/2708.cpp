#include<bits/stdc++.h>
using namespace std;
int main(){
    int aux, a=0,b=0;
    char aux2[50];
    while(1){
        cin>>aux2;
        if(strcmp(aux2, "ABEND") ==0 ){
            break;
        }
        cin>>aux;
        if(strcmp(aux2, "SALIDA") ==0 ){
            a++;
            b+=aux;
        }else{
            a--;
            b-=aux;
        }
    }
    cout<<b<<endl;
    cout<<a<<endl;
   
}