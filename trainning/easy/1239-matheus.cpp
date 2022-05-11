#include <iostream>
#include <string.h>

using namespace std;
typedef struct Pessoa{
    int idade;
    char nome[500];
}Pessoa;

Pessoa main(){

    char txt[50];
    int i=0, j=0, k=0;

    while(cin.getline (txt,256)){

        for(i=0; i < strlen(txt); i++){

            if(txt[i] == '_'){

                if(j == 0){

                    cout << "<i>";

                    j++;

                }else{

                    cout << "</i>";

                    j = 0;
                }

            }
            else if(txt[i] == '*'){

                if(k == 0){

                    cout << "<b>";

                    k++;

                }else{

                    cout << "</b>";

                    k = 0;

                }

            }else {

                cout << txt[i];
            }
        }

        cout << endl;
    }

    return 0;
}