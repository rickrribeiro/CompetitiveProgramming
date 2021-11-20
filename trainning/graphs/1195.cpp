#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

typedef struct arvore arvore;

struct arvore{

	int chave;
	arvore *esq;
	arvore *dir;
};

arvore *cria_arvore(int chave){
	arvore *p;
	p=(arvore*)malloc(sizeof(arvore));	
	p->dir=NULL;
	p->esq=NULL;
	p->chave=chave;
	
	return p;
}
void printar_arvorePRE(arvore *p){
	if(p!=NULL){
			printf(" %d", p->chave);
			printar_arvorePRE(p->esq);
			printar_arvorePRE(p->dir);
	}
	
}

void printar_arvorePOS(arvore *p){
	if(p!=NULL){
		
			printar_arvorePOS(p->esq);
			printar_arvorePOS(p->dir);
			printf(" %d", p->chave);

	}
}

void printar_arvoreIN(arvore *p){
	if(p!=NULL){
		
			printar_arvoreIN(p->esq);
			printf(" %d", p->chave);
			printar_arvoreIN(p->dir);
		
	}
}

void inserir_laele(arvore *p, int ins){
	if(ins<p->chave){
		if(p->esq==NULL){
			p->esq=cria_arvore(ins);
		}
		else{
			inserir_laele(p->esq,ins);
		}
	}
	else if(ins>p->chave){
		if(p->dir==NULL){
			p->dir=cria_arvore(ins);
		}
		else{
			inserir_laele(p->dir,ins);
		}
	}
}

int main(int argc, char *argv[]){

	int N;
	int qt;
	cin>>N;
	arvore *cabeca;
	
	for(int i=0;i<N;i++){
		
	
		cin>>qt;
		int vet[qt];
		for(int j=0; j<qt;j++){
			cin>>vet[j];
		}
		
		cabeca=cria_arvore(vet[0]);
	
		for(int j=0;j<qt;j++){
			inserir_laele(cabeca,vet[j]);
		}
		cout<<"Case "<<i+1<<":"<<endl;
		cout<<"Pre.:";
		printar_arvorePRE(cabeca);	
		cout<<endl;
		cout<<"In..:";
		printar_arvoreIN(cabeca);
		cout<<endl;
		cout<<"Post:";
		printar_arvorePOS(cabeca);
		cout<<endl;	
		cout<<endl;	
	}


}
