#include <iostream>
#include <vector>

using namespace std;

int main()
{

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
