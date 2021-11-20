#include<bits/stdc++.h>
using namespace std;

typedef struct lista{
    int num;
    lista *next, *prev;
}lista;

lista* create_list(int n){
   
    lista *p = (lista*)malloc(sizeof(lista));
    p->num = 1;
    lista *aux =p;
    for(int i=2;i<n;i++){
        lista *aux2= (lista*)malloc(sizeof(lista));
        aux2->num=i;
        aux->next = aux2;
        aux2->prev = aux;
        aux=aux2;
    }
    aux->next = p;
    p->prev = aux->next;
    return p;

}

int turn(lista *p, int salto){
    cout<<p->num<<"-"<<p->next->num<<"-"<<salto<<endl;
    if(p->next->num == p->num){
        if(p->num == 13){
            return salto;
        }else{
            return 0;
        }
    }
    p->next->prev = p->prev;
    p->prev->next = p->next;
    
    
    for(int i=0;i<salto;i++){
        p=p->next;
    }
    turn(p,salto);
}

int main(){
    
    int n;
    while(cin>>n && n!=0){
        
        if(n==13){
            cout<<1<<endl;
            continue;
        }
  
        for(int i=2;i<n;i++){
            lista *p = create_list(n);
            int res = turn(p,i);
            if(res!=0){
                cout<<res<<endl;
                break;
            }
        }

    }
}