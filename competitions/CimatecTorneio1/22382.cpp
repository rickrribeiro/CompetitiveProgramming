#include <bits/stdc++.h>

using namespace std; 

int main() {

    long long int a, b, c, d;
    long long int i, j;
    cin>>a>>b>>c>>d;
    int divisor=-1;

    for( i=a; i<=sqrt(c); i+=a ) { // i++
        if( c%i==0 ) {
            j = c/i;
            if( i%a==0 && i%b!=0 && d%i!=0 ) {
                divisor=i;
                break;
            }
            if( j%a==0 && j%b!=0 && d%j!=0 ) {
                divisor =j;
                break;
            }
        }
    }
    cout<<divisor<<endl;

}