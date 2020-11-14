#include <iostream>
#include <vector>

using namespace std;

int main()
{
<<<<<<< HEAD
    
    int saldo = 100;
    int maior;
    maior=saldo;
    int rodadas,aux;
    cin >> rodadas;
    for(int i=0;i<rodadas;i++){
    	cin>>aux;
    }
    
    	    
   

    cout << higher <<endl;
}
=======

    int saldo = 100;
    int rodadas;
    cin >> rodadas;
    int lastro = rodadas;

    vector<int> caixas;

    int value;

    while (rodadas > 0)
    {
        cin >> value;
        caixas.push_back(value);
        rodadas--;
    }

    int higher = saldo;

    for (int i = 0; i < lastro; i++) {
        int next = 100;
        for (int j = 0; j <= i; j++) {
            next += caixas[j];
        }
        if (next > higher) {
            higher = next;
        }
    }

    cout << higher << "\n";
}
>>>>>>> 933832de0287144068ebc1d675970fb0cb3912f9
