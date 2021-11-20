#include<bits/stdc++.h>

using namespace std;

	
int main(){

	double area;
	long long int r,gas;
	cin>>r>>gas;
	
	area = (4.0/3.0)*(3.1415)*pow(r,3);
	area = floor(gas/area);
	printf("%.0lf\n", area);
} 

