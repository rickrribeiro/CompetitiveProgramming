
#include <stdio.h>


int main()
{
    int n,i,desc,max,tmax;
    while(scanf("%d", &n)==1){
        max=0;
        tmax=0;
    scanf("%d",&desc);
    int arr[n];
    for(i=0;i<n;i++){
       
        scanf("%d", &arr[i]);
        
        arr[i]-=desc;
        
    }

  

    for(i=0;i<n;i++){
        tmax+=arr[i];
        if(tmax<0){tmax=0;}
        if(tmax>max){max=tmax;}
    }
     printf("%d\n", max);
    }
    return 0;
}

