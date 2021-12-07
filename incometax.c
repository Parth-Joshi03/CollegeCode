#include<stdio.h>
int main(){
	float income,tax=0;
	printf ("Enter your income  ");
	scanf("%f",&income);
	if(income>250000 && income<=500000){
	tax=tax+0.05*(income-250000);
	}
	if(income>500000 && income<=1000000){
		tax=tax+0.20*(income-250000);
	}
	if(income>=1000000){
		tax=tax+0.30*(income-250000);
	}
	printf("\n The income tax to be paid by 26th of january is %f",tax);
	return 0;
}
