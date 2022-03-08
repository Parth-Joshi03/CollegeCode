#include<stdio.h>
int main(){
int i,j,k;
for(i=1;i<6;i++){
for(j=1;j<10;j++){
if((j>4)&&(i==1)||(i==5)&&(j<6)||(i+j)==6||(i+j)==10){
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
