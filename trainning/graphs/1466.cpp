#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

typedef struct arvore arvore;

struct arvore{
	int altura;
	int chave;
	arvore *esq;
	arvore *dir;
};
int alturamax;
arvore *cria_arvore(int chave){
	arvore *p;
	p=(arvore*)malloc(sizeof(arvore));	
	p->dir=NULL;
	p->esq=NULL;
	p->chave=chave;
	p->altura=0;
	return p;
}

void printar_nivel(arvore *p, int qt){
	if(p!=NULL){
		if(p->altura!=qt){
			printar_nivel(p->esq,qt);
			printar_nivel(p->dir,qt);
		}
		else{
			printf(" %d",p->chave);
		}
	}
}

/*void printar_arvorePRE(arvore *p){
	if(p!=NULL){
			printf(" chave:%d\t altura:%d\n", p->chave,p->altura);
			printar_arvorePRE(p->esq);
			printar_arvorePRE(p->dir);
	}
	
}*/
/*
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
}*/

void inserir_laele(arvore *p, int ins,int altura){
	if(ins<p->chave){
		if(p->esq==NULL){
			arvore *nova=cria_arvore(ins);
			p->esq=nova;
			nova->altura=altura+1;
			if(nova->altura>alturamax){
				alturamax=nova->altura;
			}
		}
		else{
			inserir_laele(p->esq,ins,altura+1);
		}
	}
	else if(ins>p->chave){
		if(p->dir==NULL){
			arvore *nova=cria_arvore(ins);
			p->dir=nova;
			nova->altura=altura+1;
			
			if(nova->altura>alturamax){
				alturamax=nova->altura;
			}
		}
		else{
			inserir_laele(p->dir,ins,altura+1);
		}
	}
}

int main(int argc, char *argv[]){

	int N;
	int qt;
	cin>>N;
	arvore *cabeca;
	
	for(int i=0;i<N;i++){
		
		alturamax=0;
		cin>>qt;
		int aux;
	
		cin>>aux;
	
		cabeca=cria_arvore(aux);
		for(int j=0;j<qt-1;j++){
			
			cin>>aux;
			inserir_laele(cabeca,aux,0);
		}
		
		cout<<"Case "<<i+1<<":"<<endl;
		printf("%d",cabeca->chave);
		for(int q=1;q<=alturamax;q++){
			printar_nivel(cabeca,q);
		}
	/*	cout<<"Pre.:";
		printar_arvorePRE(cabeca);	
		cout<<endl;
		cout<<"In..:";
		printar_arvoreIN(cabeca);
		cout<<endl;
		cout<<"Post:";
		printar_arvorePOS(cabeca);
		*/
		//printar_nivel(cabeca,false,0);
		cout<<endl;	
		cout<<endl;
	}


}
