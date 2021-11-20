#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

typedef struct arvore arvore;
bool tem;
struct arvore{

	char chave;
	arvore *esq;
	arvore *dir;
};

arvore *cria_arvore(char chave){
	arvore *p;
	p=(arvore*)malloc(sizeof(arvore));	
	p->dir=NULL;
	p->esq=NULL;
	p->chave=chave;
	
	return p;
}
void printar_arvorePRE(arvore *p){
	if(p!=NULL){
		if(tem==true){
			printf(" %c", p->chave);
		}
		else{
				printf("%c", p->chave);
				tem=true;
		}
			printar_arvorePRE(p->esq);
			printar_arvorePRE(p->dir);
	}
	
}

void printar_arvorePOS(arvore *p){
	if(p!=NULL){
		
			printar_arvorePOS(p->esq);
			printar_arvorePOS(p->dir);
		if(tem==true){
			printf(" %c", p->chave);
		}
		else{
				printf("%c", p->chave);
				tem=true;
		}
	}
}

void printar_arvoreIN(arvore *p){
	if(p!=NULL){
		
		printar_arvoreIN(p->esq);
		if(tem==true){
			printf(" %c", p->chave); 
			
		
		}else{
				printf("%c", p->chave);
				tem=true;
		}
			printar_arvoreIN(p->dir);
		
	}
}

void inserir_laele(arvore *p, char ins){
	
	
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

void buscar_arvore(arvore* cabeca,char aux){
	if(cabeca!=NULL){
		if(aux==cabeca->chave){
			tem=true;
			return;
		}
		else{
			if(cabeca->chave<aux){
			buscar_arvore(cabeca->dir,aux);
			}
			else{
				buscar_arvore(cabeca->esq,aux);
			}
		}
	}
}

int main(int argc, char *argv[]){

	
	arvore *cabeca=NULL;
	char opc[9];
	char aux;
	//for(int i=0;i<11;i++){
	    while(	scanf("%s",opc)!=EOF){
		

		fflush(stdin);

		fflush(stdin);
		if(strcmp(opc,"I")==0){
			cin>>aux;
			if(cabeca==NULL){
				cabeca=cria_arvore(aux);
			}
			else{
			inserir_laele(cabeca,aux);
			}
	
		}
		else if(strcmp(opc,"INFIXA")==0){
			tem=false;
			printar_arvoreIN(cabeca);
			cout<<endl;
			
		}
		else if(strcmp(opc,"POSFIXA")==0){
			tem=false;
			printar_arvorePOS(cabeca);
			cout<<endl;	
			
		}
		else if(strcmp(opc,"PREFIXA")==0){
			tem=false;
			printar_arvorePRE(cabeca);	
			cout<<endl;
			
		}
		else if(strcmp(opc,"P")==0){
			
			cin>>aux;
			tem=false;
			buscar_arvore(cabeca,aux);
			if(tem==true){
				printf("%c existe\n",aux);
			}
			else
				printf("%c nao existe\n",aux);
			}
			
		}
	

	
	
	}



