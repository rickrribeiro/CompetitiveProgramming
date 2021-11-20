#include<bits/stdc++.h>

using namespace std;

// int MDC(int a, int b){
//     if(b<a){
//         a=a+b;
//         b=a-b;
//         a=a-b;
//     }
//     int aux=1;
//     if(b%a==0){
//         return a;
//     }
//     for(int i=a/2;i>0;i--){
//         if(a%i==0 && b%i==0){
//             aux=i;
//             break;
//         }
//     }
//     return aux;
// }

int MDC(int a, int b){
    if(b<a){
        a=a+b;
        b=a-b;
        a=a-b;
    }
    
    int aux;
    while(b%a!=0){
        aux = b%a;
        b=a;
        a=aux;
    }
    return a;
}

int main(){
    int n;
    int a,b;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        cout<<MDC(a,b)<<endl;
    }

}