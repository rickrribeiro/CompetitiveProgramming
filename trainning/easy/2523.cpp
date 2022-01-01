#include<iostream>

using namespace std;

int main(){
  char alf[26];
  int n, aux;

  while(cin>>alf){
    cin>>n;
    for(int i=0;i<n;i++){
      cin>>aux;
      cout<<alf[aux-1];
    }
    cout<<endl;
  }
}