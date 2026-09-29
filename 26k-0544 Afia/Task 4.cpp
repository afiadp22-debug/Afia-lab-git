#include<stdio.h>
int main(){
	int units;
	char type;
	float bill;
	
	printf("Enter units consumed: ");
	scanf("%d", &units);
	
	printf("Enter connection type ('C'for commercial ,'D'for domestic ) : ");
	scanf(" %c", &type);
	
	if(type == 'D' || type == 'd'){
		if (units <= 100){
			bill = units * 10;
		}
		else{
			if(units <= 300){
				bill = units * 15;
			}
			else{
				bill = units * 20;
			}
		}
	}
	else{
		if (units <= 100){
			bill = units * 15;
		}
		else{
			if(units <= 300){
				bill = units * 20;
			}
			else{
				bill = units * 25;
			}
		}
	} 
	
	printf("The total bill is : %.2f", bill);
	return 0;
	
	
	
	
}





