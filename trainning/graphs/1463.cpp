//DUPLA: Ricardo e Vinicius Serva
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<string>
using namespace std;

typedef struct arvore arvore;

struct arvore{
	int altura;
	char chave;
	arvore *esq;
	arvore *dir;
};

int alturamax;

arvore *cria_arvore(char chave){
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
			printf("%c",p->chave);
		}
	}
}


int prioridade(char a){
	
	if(a=='+' || a=='-'){
		return 1;
	}
	if(a=='/' || a=='*'){
		return 3;
	}
	else{
		return 4;
	}

}

arvore* montar(char N[]){
	

	if(strlen(N)!=0){
		char Nesq[101];
		char Ndir[101];
		
		memset(Nesq,'\0',sizeof(Nesq));
		memset(Nesq,'\0',sizeof(Ndir));
		
		arvore *cabeca;
		if(N[0]=='(' && N[strlen(N)-1]==')'){//se tiver entre parent. remove eles
			int i;
			for(i=0;i<strlen(N)-(1+1);i++){//dois ta quebrado (1+1)
			
				N[i]=N[i+1];
			}
			N[i]='\0';
		}
		int pos;
		int abertos=0;
		int prioridadeaux=9;
		for(int i=0;i<strlen(N);i++){ //pega o significante
			if(N[i]=='('){
				abertos++;
			}
			else if(N[i]==')'){
				abertos--;
			}
			if(prioridade(N[i])<=prioridadeaux && abertos==0){
				prioridadeaux=prioridade(N[i]);
				pos=i;
			}

		}//fim for significante
	
		cabeca=cria_arvore(N[pos]);		
		
		for(int i=0;i<pos;i++){
			Nesq[i]=N[i];
		}
		for(int j=0;j<strlen(N);j++){
			Ndir[j]=N[pos+1+j];
		}
		
		cabeca->esq=montar(Nesq);
		cabeca->dir=montar(Ndir);
		return cabeca;


	}
}

void colocar_altura(arvore *p,int alt){ //armengue para testar se ta ok, depois lembrar de arrumar

	if(p!=NULL){
		p->altura=alt;
		if(alt>alturamax){
			alturamax=alt;
		}
		colocar_altura(p->esq,alt+1);
		colocar_altura(p->dir,alt+1);
	}

}

int main(int argc, char *argv[]){
	
	char N[101];
	char aux[101];
	char Nesq[101];
	char Ndir[101];
	arvore *cabeca;
	int pos=0;
	int abertos;
	char guarda[101];//pra ver se tira o erro do loop infinito do EOF
	int lapa;
	int prioridadeaux;
	string tet;//testar pq vetor de char nt a indo
	memset(guarda,'\0',sizeof(guarda));
	while(scanf(" %[^\n]s",N)!=EOF){
		
		
		//scanf("%[^\n]s",N)!=EOF
		memset(aux,'\0',sizeof(aux));
		memset(Nesq,'\0',sizeof(Nesq));
		memset(Nesq,'\0',sizeof(Ndir));
		//getline(cin,tet);
		//strcpy(N,tet.c_str());
		//gets(N);
		//cin.getline(N,101);
		fflush(stdin);
		//cin>>N;
		fflush(stdin);
		//gets(N);
		
				
		lapa=0;
		for(int i=0;i<strlen(N);i++){
			if(N[i]!=32){
				aux[lapa]=N[i];
				lapa++;
			}

		}
		if(strcmp(N,guarda)==0){
			break;
		}
		else{
			strcpy(guarda,N);
		}
		strcpy(N,aux);
		
		
		alturamax=0;
		abertos;
		prioridadeaux=9;
		do{
			
			
			abertos=0;
			for(int i=0;i<strlen(N);i++){
				if(N[i]=='('){
					abertos++;
				}
			}
		
			if(abertos>=1){
				if(N[0]=='(' && N[strlen(N)-1]==')'){//se tiver entre parent. remove eles
					int i;
					for(i=0;i<strlen(N)-(1+1);i++){//dois ta quebrado (1+1)
			
						N[i]=N[i+1];
					}
					N[i]='\0';
				}
				abertos--;
			}
		
		}while(abertos!=0);
		abertos=0;
		for(int i=0;i<strlen(N);i++){
			if(N[i]=='('){
				abertos++;
			}
			else if(N[i]==')'){
				abertos--;
			}
			if(prioridade(N[i])<=prioridadeaux && abertos==0){
				prioridadeaux=prioridade(N[i]);
				pos=i;
			}

		}

		cabeca=cria_arvore(N[pos]);		
		
		for(int i=0;i<pos;i++){
			Nesq[i]=N[i];
		}
		for(int j=0;j<strlen(N);j++){
			Ndir[j]=N[pos+1+j];
		}
		
		cabeca->esq=montar(Nesq);
		cabeca->dir=montar(Ndir);
		
		colocar_altura(cabeca,0);
		for(int q=0;q<=alturamax;q++){
			cout<<"Nivel "<<q<<": ";
			printar_nivel(cabeca,q);
			cout<<endl;
		}
		cout<<endl;
		//memset(N,'\0',sizeof(N));
	}

	return 0;
}
