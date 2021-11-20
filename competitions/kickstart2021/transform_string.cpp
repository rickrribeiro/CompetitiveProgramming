// 20min - sample
#include<bits/stdc++.h>

using namespace std;

int main(){

  map<char,map<char,int>> valores;
  int n;
  char s[100001];
  char f[30];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>s;
    cin>>f;
    long long int total =0;
    for(long long int j=0; j<strlen(s); j++){
      int flag=-1;
      int aux = 99;
      for(int k=0;k<strlen(f);k++){
        if(valores[s[j]][f[k]]){
          //cout<<"aaaaaaaaaaaaaaaaaa"<<endl;
          total+= valores[s[j]][f[k]];
         // flag=1;
          break;
        }
        if(s[j]>f[k]){
          aux = (s[j]-f[k]<aux)?s[j]-f[k]:aux;
          aux = ('z'-s[j]+f[k]<aux)?'z'-s[j]+f[k]:aux;
          flag=k;
        }else{
          aux = (f[k]-s[j]<aux)?f[k]-s[j]:aux;
          aux = ('z'-f[k]+s[j]<aux)?'z'-f[k]+s[j]:aux;
          flag=k;
        }
      }
      if(flag!=-1){
        valores[s[j]][f[flag]] = aux;
        //cout<<valores[s[j]][f[flag]]<<endl;
        total+=aux;
      }

    }
    cout<<"Case #"<<i+1<<": "<<total<<endl;


  }
}