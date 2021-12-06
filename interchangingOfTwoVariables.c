#include<stdio.h>
int main(){
	int a,b,play;
	printf("The value of a is ");
	scanf("%d",&a);
	printf("\n The value of b is ");
	scanf("%d",&b);
	play=a;
	a=b;
	b=play;
	printf("After swapping \n");
	printf("The new value of a is %d \n",a);
	printf("The new value of b is %d \n",b);
	return 0;
}
