#include <stdio.h>
int fibonacchi(int n){
    if(n<=1){
return n;
    }
    else {
        return fibonacchi(n-1)+fibonacchi(n-2);
    }
}
int main(){
    int n;
    printf("Enter the number of terms of the series: ");
    scanf("%d",&n);
    printf("\n The series is as follows ");
    for(int i=0;i<n;i++){
        printf(" %d",fibonacchi(i));
    }


    return 0;
}