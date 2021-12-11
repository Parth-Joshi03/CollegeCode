#include<stdio.h>
int main(){
	int month;
	printf("Enter the month(1-12) ");
	scanf("%d",&month);
	switch(month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		printf("Number of days in month are 31");
		break;
		case 4:
	    case 6:
	    case 9:
	    case 11:
	    printf("Number of days in month are 30");
	    break;
	    case 2:
	    	printf("number of days in month are 28-29");
	    	break;
	    default:
	    	printf("Invalid input! please enter valid month");
	    	break;
	    	
	    	
			
	}
	return 0;
	
}
