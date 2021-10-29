#include<bits/stdc++.h>
using namespace std;


int main(){
    long long int num;
    cin>>num;
    char portas[num];
    memset(portas,'A', num * sizeof(char));
    
    for(int i=1;i<num;i++){

        for(int j=2;j<=i+1;j++){
            // if(i==3){
            //     cout<<portas[i]<<" ";
            // }
            if ((i+1)%j == 0){

                if(portas[i] == 'A'){

                    
                    portas[i] = 'F';
                }
                else{
                    portas[i] = 'A';
                }
                
            }
        }
           
    }
    int aux = 0;
    for(int i=0;i<num;i++){
        cout<<portas[i]<<" ";
        if(portas[i] == 'A'){
            aux+=1;
        }
    }
    cout<<aux<<endl;
}