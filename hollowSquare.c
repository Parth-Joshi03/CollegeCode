#include<stdio.h>
int main(){
	int i,j,k;
	for(i=1;i<3;i++){
		for(j=1;j<6;j++){
		
			
			printf("*");
		}
		printf("\n");
	
			
			for(k=0;k<3;k++){
			
		
		for(i=1;i<6;i++){
		
			if(i==1||i==5||j==0||j==5){
				printf("*");
			}
			else{
				printf(" ");
			}
			
		}
		printf("\n");
	}for(j=1;j<6;j++){
		
			
			printf("*");
		}
		
		

	}
	return 0;
}
