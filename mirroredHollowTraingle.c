#include<stdio.h>
int main(){
	int i,j,k;
	for(i=1;i<6;i++){
		for(j=1;j<6;j++){
			if(j==5||i+j==6||i==5){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
