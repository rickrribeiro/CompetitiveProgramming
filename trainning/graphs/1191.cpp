#include <iostream>
#include<string>
#include<cstdio>
using namespace std;
 
int current;
 
void arvore(string prefixa, string infixa, int p, int q) {
    if (p <= q) {
        current++;
        int pos = infixa.find(prefixa[current]);
        arvore(prefixa, infixa, p, pos-1);
        arvore(prefixa, infixa, pos+1, q);
        cout << infixa[pos];
    }
}
 
int main() {
  
    	string prefix, infix;
     
   	while (cin>>prefix>>infix){
        current = -1;
        int n;
        
        n=prefix.length();
         
        arvore(prefix, infix, 0, n-1);
        cout << endl;
    }
}
