#include<stdio.h>
int main(){
	int age, price;
	char day;
	
	printf("Enter age : \n");
	scanf("%d", &age);
	printf("Enter day ('W'for weekday , 'H'for holiday) : ");
	scanf(" %c", &day);
	
	if( age < 12 || age > 60){
		//discounted price
		if( day == 'W' || day == 'w'){
			price = 300;
		}
		else if(day =='H' || day == 'h'){
			price = 400;
		}
	}
	else{
		//original price
		if( day == 'W' || day == 'w'){
			price = 500;
		}
		else if(day =='H' || day == 'h'){
			price = 600;
		}
	}
	
	printf("Final ticket price = %d", price);
	return 0;
	
	
	
	
	
	
	
	
}
