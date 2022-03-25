#include<stdio.h>
int main(){
int i,j,k;
for(i=1;i<6;i++){
for(j=1;j<10;j++){
if((6>j>0&&i==1)||(i==j)||(i>4&&j>4)||(j-i)==4){
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
