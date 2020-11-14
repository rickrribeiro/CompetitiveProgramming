
#include<bits/stdc++.h>
#include <stdio.h>


using namespace std;

typedef struct lista{
	char *palavra;
	lista *next;
}lista;

lista* cria_lista(char *palavra){
	
	lista *p = (lista*)malloc(sizeof(lista));
	
	p->palavra = palavra;
	
	p->next = NULL;
	
	return p;
}

/*
void push(pilha *p,int chegada, int saida){
	pilha *nova = cria_pilha(chegada,saida);
	nova->next = p->next;
	p->next = nova;
} */


void printar_lista(lista *p, int first){// 1 sim, 0 nao para os espacos
	if(p!=NULL){
		if(first != 1){
			cout<<" ";
		}
		cout<<p->palavra;
		printar_lista(p->next,0);
	}else{
		cout<<endl; //quando terminar quebra a linha
	}
}
/*
int verifica_ordem(pilha *p, int ultimo){
	//cout<<p->saida<<" "<<ultimo<<endl;
	if(p->saida >= ultimo){
		if(p->next == NULL){
			return 1;
		}else{
			return verifica_ordem(p->next, p->saida);
		}
	}else{
		return 0;
	}
}
*/

void addlist(lista *p, char *token){
	if(p->next == NULL){
		p->next = cria_lista(token);
	}else{
		//cout<<"token: "<<token<<" "<<p->next->palavra<<endl;
		if(strlen(token)>strlen(p->next->palavra)){
			lista *nv = cria_lista(token);
			nv->next = p->next;
			p->next = nv;
		}else{ 
			addlist(p->next, token);
		}
	}
}

vector<string> split(string str,string sep){
    char* cstr=const_cast<char*>(str.c_str());
    char* current;
    vector<string> arr;
    current=strtok(cstr,sep.c_str());
    while(current!=NULL){
        arr.push_back(current);
        current=strtok(NULL,sep.c_str());
    }
    return arr;
}

int main(){
	lista *p;
	int n;
	//char frase[2600];
	string frase;
	char *tk;
	vector<std::string> arr;
	cin>>n;
	getchar();
	//n=4; //lembrar de trocar aq pelo cin
	for(int i=0;i<n;i++){
		
		getline( cin, frase );
  		arr = split(frase, " ");
  		//p = cria_lista(token);
  		//cout<<"first: "<<arr[0].c_str()<<endl;
  		p=cria_lista("cabeca");
  		
  		for(size_t i=0;i<arr.size();i++){
      		   tk= const_cast<char*>(arr[i].c_str());
      		   addlist(p,tk);
        	}
		printar_lista(p->next,1);
	
	}
	
	
		
}
