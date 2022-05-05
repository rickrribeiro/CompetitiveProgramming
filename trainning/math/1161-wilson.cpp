#include <iostream>
 
using namespace std;
 
int factorialSum(int input, int input2) {
    int n1 = input * (input - 1) * (input - 2);
    int n2 = input2 * (input2 - 1) * (input2 - 2);
    
    return n1+n2; 
}
 
int main() {
 
    int M, N, result = 0;

    printf("Enter with first number: \n"); 
    scanf("%i", &M);
    printf("Enter with second number: \n");
    scanf("%i", &N);
    result = factorialSum(M, N);

    printf("%d", result);    
 
    return 0;
}