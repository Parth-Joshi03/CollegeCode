#include <stdio.h>
int main() {
    int n, i, fact =1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <=10; i++) {
        fact= n*i;
        printf("%d * %d = %d \n",n,i,fact);
    }

    return 0;
}
