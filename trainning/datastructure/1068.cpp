#include <stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    int i;
    char n[1001];
    int qt;
    while(cin>>n){
        qt=0;
       for(i=0;i<strlen(n);i++){
           if(n[i]=='('){
               qt++;
           }else if(n[i]==')'){
               qt--;
           }
           if(qt<0){
               break;
           }
       }
        if(qt!=0){
            printf("incorrect\n");
        }else{
            printf("correct\n");
        }
    }
   
    return 0;
}
