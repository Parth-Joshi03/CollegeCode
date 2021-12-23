#include<stdio.h>
int main(){
	char c;
	int a,b,d;
	printf("enter the operand(+,-,*,/,%) \n");
	scanf("%c",&c);
	printf("Enter the value of a and b \n");
	scanf("%d%d",&a,&b);
	switch(c)
	{
		case '+': d=a+b;
		printf("The addition of two numbers is %d",d);
		break;
		case '-':d=a-b;
		printf("The difference of two number is %d ",d);
		break;
		case '*': d=a*b;
		printf("The product of two numbers is %d",d);
		break;
		case '/': d=a/b;
		printf("The division of two numbers is %d",d);
		break;
		case '%': d=a%d;
		printf("The quotient of two numbers is %d",d);
		break;
	}
	return 0;
}

