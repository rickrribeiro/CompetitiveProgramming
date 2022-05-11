#include <iostream>
#include <string.h>

using namespace std;

int main(){
    long long int  n = 0;

    while(cin >> n){
        long long int matricula = 0, i = 1, epr = 0, ehd = 0, intrusos = 0, a = 0;
        char curso[3];

        a = n;
        for(i; i <= n; i++){

            cin >> matricula >> curso;

            

            if(strcmp(curso, "EPR") == 0){

                epr++;

            }else if(strcmp(curso, "EHD") == 0){

                ehd++;

            }else{

                intrusos++;
            }

            n = a;
        }

        cout << "EPR: " << epr << endl;
        cout << "EHD: " << ehd << endl;
        cout << "INTRUSOS: " << intrusos << endl;
    }
    return 0;
}