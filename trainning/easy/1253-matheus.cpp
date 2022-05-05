#include <iostream>
#include <string.h>

using namespace std;

int main(){

    int i=0, j=0, k=0, x=0, y=0;
    char cod[50], cifra[54]{"ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ"};

    cin >> x;

    for(i=0; i < x; i++){

        cin >> cod;

        cin >> y;

        for(j=0; j < strlen(cod); j++){

            cout << cifra[cod[j] + y];
        }
    }

    return 0;
}