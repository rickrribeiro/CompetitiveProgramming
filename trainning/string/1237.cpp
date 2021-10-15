#include<iostream>
#include<string.h>
#include <string>
using namespace std;

int main(){
    string str1,str2;
    
    while(getline(cin,str1) && getline(cin,str2)){
        int maior=0;
        int atual = 0;
        for(int i=0;i<str1.length();i++){
            
            for(int j=0;j<str2.length();j++){
                
                if(i+atual == str1.length()){
                    break;
                }
                
                if(str1.at(i+atual)==str2.at(j)){
                    atual+=1;
                }else{
                    if(atual>maior){
                        maior = atual;
                    }
                    atual=0;
                }
            }
            if(atual>maior){
                maior = atual;
            }
            atual=0;
        }
        printf("%d\n",maior);
    }
}