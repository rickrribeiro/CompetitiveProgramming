#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    long long int total=10;
    long long int subindo[n];
    long long int descendo[n];
    long long int aux1, aux2;
    long long int a=0,b=0;
    for(long long int i=0; i<n; i++){
        cin>>aux1>>aux2;
        if(aux2==0){
            subindo[a]=aux1;
            a++;
        }else{
            descendo[b]=aux1;
            b++;
        }
    }
    long long int j=0,k=0;
    aux1=0;
    aux2=0;
    for(long long int i =0;i<n;i++){
        //cout<<aux1<<"-"<<total<<endl;
        if(aux1!=0){
            
            
            if(j==a){ //todo mundo ja subiu 0
                 if(descendo[k]-10>=aux1 ){
                    total=descendo[k]+10;
                    aux1=descendo[k];
                    aux2=1;
                    k++;
                    continue;
                }
                
                 if(aux2==1){
                    total+=descendo[k]-aux1;
                    aux1=descendo[k];
                    
                }else{
                    if(descendo[b-1]-10<aux1){
                        total+=10;
                        break;
                    }
                    if(descendo[k]>aux1+10){
                       
                        total += descendo[k]-aux1;
                    }else{
                      
                        total+=10;
                    }
                    aux2=1;
                    aux1=descendo[k];
                }
                k++;
            }else if(k==b){ //todo mundo ja desceu 1
                if(subindo[j]-10>=aux1 ){
                    total=subindo[j]+10;
                    aux1=subindo[j];
                    aux2=0;
                    j++;
                    continue;
                }
                if(aux2==0){
                    
                    total+=subindo[j]-aux1;
                    aux1=subindo[j];
                }else{
                    if(subindo[a-1]-10<aux1){
                        total+=10;
                        break;
                    }
                    if(subindo[j]>aux1+10){
                        total += subindo[j]-aux1;
                    }else{
                        total+=10;
                    }
                    aux2=0;
                    aux1=subindo[j];
                }
                j++;
            }else{
                if(subindo[j]-10>=aux1 && descendo[k]-10 >= aux1){
                    if(subindo[j]<descendo[k]){
                        total=subindo[j]+10;
                        aux1=subindo[j];
                        aux2=0;
                        j++;
                    }else{
                        total=descendo[k]+10;
                        aux1=descendo[k];
                        aux2=1;
                        k++;
                    }
                    continue;
                }        
                if(aux2==0){
                    
                    if(subindo[j]-aux1<10 || subindo[j]<descendo[k]){ //vai subir o prox junto
                        
                        total+=subindo[j]-aux1;
                        aux1=subindo[j];
                        j++;
                    }else{
                        
                        if(descendo[k]-aux1<=10){
                            total += 10;
                            aux1=descendo[k];
                            aux2=1;
                            k++;
                        }else{
                            total += descendo[k]-aux1;
                            aux1=descendo[k];
                            aux2=1;
                            k++;
                        }
                    }
                }else{
                   // cout<<"G";
                    if(descendo[k]-aux1<10 || descendo[k]<subindo[j]){ //vai subir o prox kunto
                        total+=descendo[k]-aux1;
                        aux1=descendo[k];
                        k++;
                    }else{
                        if(subindo[j]-aux1<10){
                            total += 10;
                            aux1=subindo[j];
                            aux2=0;
                            j++;
                        }else{
                            total += subindo[j]-aux1;
                            aux1=subindo[j];
                            aux2=0;
                            j++;
                        }
                    }
                }
            }
        }else{
            
            if(b==0){ //ngm vai descer
                aux1=subindo[0];
                aux2=0;
                total+=aux1;
                j++;
            }else if(a==0){
                aux1=descendo[0];
                aux2=1;
                total+=aux1;
                k++;
            }else{
                if(subindo[0]<descendo[0]){
                    aux1=subindo[0];
                    aux2=0;
                    j++;
                    total+=aux1;
                }else{
                    aux1=descendo[0];
                    aux2=1;
                    k++;
                    total+=aux1;
                }
            }
        }
    }
    
    cout<<total<<endl;
}