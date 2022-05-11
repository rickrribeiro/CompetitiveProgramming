#include<bits/stdc++.h>

using namespace std;

int main(){
    char a[1000];

    cin>>a;
    long long int total = 0;
    for(int i=0;i<strlen(a);i++){
        total+=a[i]-'0';
    }
    cout<<total%3<<endl;
}