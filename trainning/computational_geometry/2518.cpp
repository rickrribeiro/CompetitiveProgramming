#include<bits/stdc++.h>

using namespace std;

	
int main(){

	long int qt,h,c,l;
	double hipot;
	while(cin>>qt>>h>>c>>l){

		hipot = sqrt(c*c+h*h);
		hipot *=l*qt;
		printf("%.4lf\n", hipot/10000);
	}

}
