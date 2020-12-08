#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

typedef struct arvore arvore;
bool tem;
struct arvore{
	bool kem;
	int count;
	char chave[11];
	arvore *esq;
	arvore *dir;
};

arvore *cria_arvore(char chave[]){
	arvore *p;
	p=(arvore*)malloc(sizeof(arvore));	
	p->dir=NULL;
	p->esq=NULL;
	p->count =1;
	p->kem=true;
	//p->chave=chave;
	strcpy(p->chave,chave);

	return p;
}
arvore *cria_cabeca(){
	arvore *p;
	p=(arvore*)malloc(sizeof(arvore));	
	p->dir=NULL;
	p->esq=NULL;
	p->count =1;
	//p->chave=chave;
	

	return p;
}
void printar_arvorePRE(arvore *p){
	if(p!=NULL){
		printar_arvorePRE(p->esq);
		if(p->kem==true){
			printf("%s %d\n", p->chave, p->count);
		}
		
			
			printar_arvorePRE(p->dir);
	}
	
}

void inserir_laele(arvore *p, char ins[]){
	if(p==NULL){
		p=cria_arvore(ins);
		return;
	}
				
	//if(ins<p->chave){
	if(strcmp(ins,p->chave)<0){
		
		if(p->esq==NULL){
			
			p->esq=cria_arvore(ins);
		}
		else{
			inserir_laele(p->esq,ins);
		}
	}
	
	 else if(strcmp(ins,p->chave)>0){
		
		if(p->dir==NULL){
			p->dir=cria_arvore(ins);
		}
		else{
			inserir_laele(p->dir,ins);
		}
	}
}

void buscar_arvore(arvore* cabeca,char aux[]){
	if(cabeca!=NULL){
	
		if(strcmp(aux,cabeca->chave)==0){
			cabeca->count=cabeca->count+1;
			tem=true;
			return;
		}
		else{
			
			if(strcmp(aux,cabeca->chave)>0){
			buscar_arvore(cabeca->dir,aux);
			}
			else{
				buscar_arvore(cabeca->esq,aux);
			}
		}
	}
}


/*
arvore *remove_arvore(arvore *p, char info[]){
	if (p==NULL) return NULL;
	arvore* aux;
	arvore* ant;
	
	if (strcmp(p->chave,info)==0)
	{
		printf("entrou");
		p->kem=false;
		if (p->esq==NULL && !p->dir)
		{
			free(p);
			return NULL;
		}
		else
		{
			if (p->esq && !p->dir)
			{
				aux = p->esq;
				free(p);
				p = NULL;
				return aux;
			}
			else
			{	
				if (p->dir && !p->esq)
				{
					aux = p->dir;
					free(p);
					p = NULL;
					return aux;
				}
				else
				{
					aux = p->esq;
					ant = NULL;
					while(aux->dir) 
					{
						ant = aux;
						aux = aux->dir;
					}
					
					if (ant) ant->dir = aux->esq;
					
					aux->dir = p->dir;
					if (aux == p->esq)
					aux->esq = p->esq->esq;
					else aux->esq = p->esq;
					
					free(p);
					p = NULL;
					return aux;
				}
			}
		}
	}
	else if (strcmp(p->chave,info)<	0)
		p->esq = remove_arvore(p->esq, info);
	else
		p->esq = remove_arvore(p->dir, info);
	return p;
}
*/
void removerarv(arvore *p, char aud[]){
	if(p!=NULL){
		
		if(strcmp(p->chave,aud)==0){
			p->kem=false;
		}
		else{
			if (strcmp(p->chave,aud)>0){
				removerarv(p->esq,aud);
			}
			else{
			removerarv(p->dir,aud);
			}		
		}
	}
}

int main(int argc, char *argv[]){

	
	arvore *cabecaASS=cria_cabeca();
	arvore *cabecaMorto=cria_cabeca();
	//arvore *aux;
	char aux[11];
	char aux3[11];
	//for(int i=0;i<100;i++){
	   while(cin>>aux>>aux3){ 		
		//cin>>aux>>aux3;
		fflush(stdin);
		
		tem=false;
		buscar_arvore(cabecaASS,aux);
		
			if(tem==false){
			
				buscar_arvore(cabecaMorto,aux);//tentar sem isso se der time limit
				
					if(tem==false){//tentar sem isso se der time limit
						
						inserir_laele(cabecaASS,aux);
						
					}//tentar sem isso se der time limit
					else{//sem isso se der time limit
						tem=false;
					}//sem isso se der time limit
			}
			else{
				tem=false;
			}
		
			buscar_arvore(cabecaASS,aux3);
			if(tem==true){
				removerarv(cabecaASS, aux3);
				//remove_arvore(cabecaASS,aux3);
				
			}
			tem=false;
			buscar_arvore(cabecaMorto,aux3);
			if(tem==false){

				inserir_laele(cabecaMorto,aux3);
			}
		}
		
	cout<<"HALL OF MURDERERS\n";
	printar_arvorePRE(cabecaASS->esq);
	printar_arvorePRE(cabecaASS->dir);
	
	}



