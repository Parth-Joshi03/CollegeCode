#include<stdio.h>
int main(){
	int S1,S2,S3,S4,S5,sum,per;
	printf("Enter the marks of subject 1 \n");
	scanf("%d",&S1);
	printf("Enter the marks of subject 2 \n");
	scanf("%d",&S2);
	printf("Enter the marks of subject 3\n");
	scanf("%d",&S3);
	printf("Enter the marks of subject 4 \n");
	scanf("%d",&S4);
	printf("enter the marks of sunject 5 \n");
	scanf("%d",&S5);
	sum=S1+S2+S3+S4+S5;
	per=sum/5;
	printf("The sum of marks of all subjects is %d \n",sum);
	printf("The percentage of marks are %d  \n",per);
	return 0;
	}
