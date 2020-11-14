#include<bits/stdc++.h>

using namespace std;


bool ordena(char c1, char c2)
{
	return tolower(c1) < tolower(c2);
}

int main()
{	//PREENCHE A MATRIZ
	int x,y;
	cin>>x>>y;
	char matriz[x][y];
	int matrizEspeciais[x][y];
	
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cin>>matriz[i][j];
			matrizEspeciais[i][j]=0; // zera especiais
		}
	}
	
	//PEGA AS PALAVRAS A SEREM BUSCADAS e insere ordenando as letras
	int qtPalavras;
	cin>>qtPalavras;
	vector<string> palavras;
	string aux;
	for(int i=0;i<qtPalavras;i++){
		cin>>aux;
		sort(aux.begin(), aux.end(), ordena);
		palavras.push_back(aux);
	}
	cout<<"INICIANDO VERIFICACAO"<<endl;
	for (auto &p : palavras){
		cout<<p<<endl;
	}
	cout<<"INICIANDO VERIFICACAO 2"<<endl;
		for(int i=0;i<x;i++){
			for(int j=0;j<y;j++){
				cout<<matrizEspeciais[i][j]<<" ";
			}
			cout<<endl;
		}
	cout<<"FINALIZANDO VERIFICACAO"<<endl;
	//VERIFICA AS PALAVRAS
	int tam;
	
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			for (auto &p : palavras) 
			{  
			    tam=p.length(); // tamanho da palavra a ser verificada
			    if(tam<x-i){ //se der erro ve o -1
			    	aux="";
			    	for(int k=0;k<tam;k++){
			    		aux+=matriz[i+k][j];
			    	}
			    	sort(aux.begin(), aux.end(), ordena);
			    	if(p==aux){
			    		for(int k=0;k<tam;k++){
			    			matrizEspeciais[i+k][j]++;
			    		}
			    	}
			    }
			    if(tam<y-j){
			    	aux="";
			    	for(int k=0;k<tam;k++){
			    		aux+=matriz[i][j+k];
			    	}
			    	sort(aux.begin(), aux.end(), ordena);
			    	if(p==aux){
			    		for(int k=0;k<tam;k++){
			    			matrizEspeciais[i][j+k]++;
			    		}
			    	}
			    }
			    if(tam<x-i && tam<y-j){
			    	aux="";
			    	for(int k=0;k<tam;k++){
			    		aux+=matriz[i+k][j+k];
			    	}
			    	sort(aux.begin(), aux.end(), ordena);
			    	if(p==aux){
			    		for(int k=0;k<tam;k++){
			    			matrizEspeciais[i+k][j+k]++;
			    		}
			    	}
			    }
			}
		}
	}
	
    for(int i=0;i<x;i++){
    	for(int j=0;j<y;j++){
    		cout<<matrizEspeciais[i][j];
    	}
    	cout<<endl;
    }
}


