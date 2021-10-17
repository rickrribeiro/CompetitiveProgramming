#include<bits/stdc++.h>
#include<map>
using namespace std;
typedef struct lista lista;

struct lista{
	int num;
	lista *prox;
	lista *ant;
};

lista* crialista(lista *cabeca,lista *at, int *num){
	if(at->num<*num){
		lista *NOVO;
		NOVO=(lista*)malloc(sizeof(lista));
		NOVO->prox=at->prox;
		at->prox=NOVO;
		NOVO->num=at->num+1;
		NOVO->ant=at;
		crialista(cabeca,NOVO,num);
	}else{
		cabeca->ant=at;
		return cabeca;
	}
}

void jogo(lista* at){
	if(at->prox!=at){
		cout<<" "<<at->num;
		if(at->prox->prox!=at){
			
		cout<<",";
		}
		at->prox->ant=at->ant;
		at->ant->prox=at->prox;		
		jogo(at->prox->prox);
	}else{
		cout<<std::endl<<"Remaining card: ";
		cout<<at->num<<endl;
	
	}
}

int main(int argc, char *argv[]){
	map<string,int> in;
	int num;
	while(std::cin>>num && num!=0){
		lista *p=(lista*)malloc(sizeof(lista));
		p->prox=p;
		p->ant=p;
		p->num=1;
		p=crialista(p,p,&num);
		cout<<"Discarded cards:";
		jogo(p);
	}
}