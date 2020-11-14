#include<bits/stdc++.h>

using namespace std;

int main(){
double a,b,c;
cin>>a>>b>>c;
double qt = a/((b+c)/2);
int total=0;
for(int i=b;i<=c;i++){
	total+=i;
}
printf("total: %d\n", total);
printf("%.5lf\n", ((int)qt)+0.01 );


}
