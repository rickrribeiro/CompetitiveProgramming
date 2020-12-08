/*
largura 1 carro e profundidade  k carros
dado horario de chegar e saida de n motoristas, diga se a fila ta em ordem
1 linha n e k até 0 0 quantidade carros / capacidade
n linhas chegada e saida
*/
#include<bits/stdc++.h>

using namespace std;

typedef struct pilha{
	int chegada;
	int saida;
	pilha *next;
}pilha;

pilha* cria_pilha(int chegada, int saida){
	pilha *p = (pilha*)malloc(sizeof(pilha));
	p->chegada =chegada;
	p->saida = saida;
	p->next = NULL;
	return p;
}


void push(pilha *p,int chegada, int saida){
	pilha *nova = cria_pilha(chegada,saida);
	nova->next = p->next;
	p->next = nova;
}

void pop(pilha *p){ //se der erro ver se p!=null
	if(p->next!=NULL){
		p->next = p->next->next;
	}
}


void printar_pilha(pilha *p){
	if(p!=NULL){
		cout<<"Entrada: "<<p->chegada<<" Saida: "<<p->saida<<endl;
		printar_pilha(p->next);
	}
}
void remove_ate_saida(pilha *p, int chegada_prox,int *total){
	if(p->next != NULL){
		if(p->next->saida <= chegada_prox ){
			//cout<<"entro aq"<<endl;
			pop(p);
			//printf("Total= %d ", *total);
			*total -=1;
			//printf("Total= %d ", *total);
			remove_ate_saida(p,chegada_prox,total);
		}
	}
}
// se chegada > saida vai removendo e adiciona, no final verifica a pilha toda

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

int main(){
	pilha *p;
	int chegada,saida,carros,espaco,total;
	int flag = 1;//1 sim e 0 nao
	while(cin>>carros>>espaco && carros !=0 && espaco!=0){
		p = cria_pilha(0,0);
		total=0;
		flag = 1;
		for(int i=0;i<carros;i++){
			
			cin>>chegada>>saida;
			if(p->next && chegada<p->next->saida && saida>p->next->saida){
			//	cout<<""<<endl;
				flag =0;
			}
			//printf("%d vai remover\n", total);
			remove_ate_saida(p,chegada,&total);
			//printf("%d removeu\n", total);
			push(p,chegada,saida);
			total++;
			if(total>espaco){
			//	cout<<"aqq"<<endl;
				flag=0;
			}
		}
		
		if(flag == 1){
			//cout<<"aqqq"<<endl;
			flag = verifica_ordem(p->next, p->next->saida);
		}
		
		if(flag == 1){
			
			cout<<"Sim"<<endl;
		}else{
			cout<<"Nao"<<endl;
		}
	}
	
	
	
		
}
