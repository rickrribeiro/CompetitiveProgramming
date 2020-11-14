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
	
	//VERIFICA AS PALAVRAS
	int tam;
	int indice=0;//saber qual
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
		indice=0;
			for (auto &p : palavras) 
			{  
				indice++;
			    tam=p.length(); // tamanho da palavra a ser verificada
			    if(tam<=x-i){ //se der erro ve o -1
			    	aux="";
			    	for(int k=0;k<tam;k++){
			    		aux+=matriz[i+k][j];
			    	}
			    	sort(aux.begin(), aux.end(), ordena);
			    	if(p==aux){
			    		for(int k=0;k<tam;k++){
			    			if(matrizEspeciais[i+k][j]==0){
			    				matrizEspeciais[i+k][j]=indice;
			    			}else if(matrizEspeciais[i+k][j]!=99 && matrizEspeciais[i+k][j]!=indice){
			    				matrizEspeciais[i+k][j]=99;
			    			}
			    			
			    		}
			    	}
			    }
			    if(tam<=y-j){
			    	aux="";
			    	for(int k=0;k<tam;k++){
			    		aux+=matriz[i][j+k];
			    	}
			    	sort(aux.begin(), aux.end(), ordena);
			    	if(p==aux){
			    		for(int k=0;k<tam;k++){
			    			
			    			if(matrizEspeciais[i][j+k]==0){
			    				matrizEspeciais[i][j+k]=indice;
			    			}else if(matrizEspeciais[i][j+k]!=99 && matrizEspeciais[i][j+k]!=indice){
			    				matrizEspeciais[i][j+k]=99;
			    			}
			    		}
			    	}
			    }
			    if(tam<=x-i && tam<=y-j){ //diagonal princ
			    	aux="";
			    	for(int k=0;k<tam;k++){
			    		aux+=matriz[i+k][j+k];
			    	}
			    	sort(aux.begin(), aux.end(), ordena);
			    	if(p==aux){
			    		for(int k=0;k<tam;k++){
			    			if(matrizEspeciais[i+k][j+k]==0){
			    				matrizEspeciais[i+k][j+k]=indice;
			    			}else if(matrizEspeciais[i+k][j+k]!=99 && matrizEspeciais[i+k][j+k]!=indice){
			    				matrizEspeciais[i+k][j+k]=99;
			    			}
			    		}
			    	}
			    }
			     if(i+tam<=x && j+1>=tam){ //diagonal sec
			    	aux="";
			    	for(int k=0;k<tam;k++){
			    		aux+=matriz[i+k][j-k];
			    	}
			    	sort(aux.begin(), aux.end(), ordena);
			    	if(p==aux){
			    		for(int k=0;k<tam;k++){
			    			if(matrizEspeciais[i+k][j-k]==0){
			    				matrizEspeciais[i+k][j-k]=indice;
			    			}else if(matrizEspeciais[i+k][j-k]!=99 && matrizEspeciais[i+k][j-k]!=indice){
			    				matrizEspeciais[i+k][j-k]=99;
			    			}
			    		}
			    	}
			    } //fim diagonal
			    
			    
			}
		}
	}
	int val=0;
	//print teste
	 /*for(int i=0;i<x;i++){
	    	for(int j=0;j<y;j++){
	    		cout<<matrizEspeciais[i][j]<<" ";
	    	}
	    	cout<<endl;
	    	
	    } */
	//print teste2 
	
    for(int i=0;i<x;i++){
    	for(int j=0;j<y;j++){
    		if(matrizEspeciais[i][j]==99){
			val++;
		}
    	}
    	
    }
    cout<<val<<endl;
}


