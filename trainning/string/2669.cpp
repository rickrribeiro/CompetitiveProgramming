#include<bits/stdc++.h>

using namespace std;
int main(){
    char a[100001];
    cin>>a;
    long long int total=0;
    for(long long int i=0;i<strlen(a);i++){
        total+=a[i]-'a'+1;
    }
    cout<<total<<endl;
}