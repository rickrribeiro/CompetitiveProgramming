#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int r,g,b;
    scanf("%llx %llx %llx",&r, &g, &b);
    long long int qtg = (r/g);
    qtg = qtg*qtg;
    long long int qtb = (g/b);
    
    qtb= qtb*qtb;
    qtb= qtb*qtg;
    // cout<<qtg<<endl;
    // cout<<qtb<<endl;
    //printf("%x\n",(pow((r/g),2)*pow((g/b),2))+1);
    printf("%llx\n",qtb+qtg+1);
}