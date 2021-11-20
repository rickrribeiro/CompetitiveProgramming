#include<bits/stdc++.h>

using namespace std;

int main(){

  long long int n,t;
  char aux,aux2='-';
  cin>>n;
  for(int i=0;i<n;i++){
    long long int total = 0;
    vector<char> v;
    cin>>t;
    for(long int j=0;j<t;j++){
      cin>>aux;
      if(aux!=aux2){
        v.push_back(aux);
        aux2=aux;
      }
    }
    char last, last2='-';
    while (!v.empty()){

      last=v.back();
      v.pop_back();
      if(last=='Y'){
        total+=1;
      }else if(last=='B'){
        total+=1;
      }else if(last=='G'){
        if(last2=='Y'){
          if(v.empty() || v.back()!='B'){
            total+=1;
          }
        }else if(last2=='B'){
          if(v.empty() || v.back()!='Y'){
            total+=1;
          }
        }else{
          total+=1;
          if(v.empty() || (v.back()!='B' && v.back()!='Y')){
            total+=1;
          }
        }
      }
      last2=last;
    }
    
    cout<<"Case #"<<i+1<<": "<<total<<endl;

  }
}