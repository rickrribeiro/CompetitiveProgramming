#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("resp.txt","a");

    long long int fat[100001]={1};
    long long int aux=1;
    for(long long int i=1;i<100001;i++){
        //aux = aux *i;
        aux=fat[i-1]*i;
        fat[i] = aux%1000000009;
        fprintf(fptr,"%lld\n",fat[i]/6);
        //printf("%lld\n", fat[i]);
    }
    long long int n;
    while(scanf("%lld", &n)!=EOF){
        printf("%lld\n", (fat[n]/6));
    }
}