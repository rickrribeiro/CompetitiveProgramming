#include <iostream>
using namespace std;


int main(){

    long long int A, B;

    

    while(cin >>A){

                   cin >> B;

                   if(A >= B){
                       cout << A-B <<endl;
                        }
                        else {
                            cout << B-A << "\n";
                        }
    }

    return 0;
}   
