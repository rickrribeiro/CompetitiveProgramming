#include<iostream>
#include <vector>
#include <set>

using namespace std;

class vertice {
public:
	int x;
	int y;
	char letra;
	vector<char> adj;
};

int main() {

	int L, C, N;

	vector<string> matriz;
	vector<string> anamatriz;
	vector<vertice*> graph;


	cin >> L >> C;

	for (int i = 0; i < L; i++) {
		string palavra;
		cin >> palavra;
		matriz.push_back(palavra);
	}

	for (int x = 0; x < L; x++) {
		int y = 0;
		string palavra = matriz[x];

		for (char c : palavra) {
			vertice* v = new vertice();
			v->letra = c;
			v->x = x;
			v->y = y;

			if (y - 1 >= 0) {
				v->adj.push_back(palavra[y - 1]);
				if (x - 1 >= 0) {
					v->adj.push_back(matriz[x - 1][y - 1]);
				}
				if (x + 1 < L) {
					v->adj.push_back(matriz[x + 1][y - 1]);
				}
			}

			if (y + 1 < C) {
				v->adj.push_back(palavra[y + 1]);
				if (x - 1 >= 0) {
					v->adj.push_back(matriz[x - 1][y + 1]);
				}
				if (x + 1 < L) {
					v->adj.push_back(matriz[x + 1][y + 1]);
				}
			}

			if (x - 1 >= 0) {
				v->adj.push_back(matriz[x - 1][y]);
			}

			if (x + 1 < L) {
				v->adj.push_back(matriz[x + 1][y]);
			}

			graph.push_back(v);
			y++;

			cout << endl;
			cout << endl;
			cout << "ADJ para " << v->letra << "\n";
			for (int s = 0; s < v->adj.size(); s++) {
				cout << v->adj[s];
			}
			cout << endl;
		}

	}

	cin >> N;

	for (int i = 0; i < N; i++) {
		string anagrama;
		anamatriz.push_back(anagrama);
	}


}
