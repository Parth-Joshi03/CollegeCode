#include<stdio.h>
int main(){
	float Celsius,Farhenite,product;
	printf("Give the value of temperature(in celcius) \n: ");
	scanf("%f",&Celsius);
	Farhenite=(1.8 *Celsius)+32;
	printf("The temperature in farehnite is %f",Farhenite);
	return 0;
	
}
