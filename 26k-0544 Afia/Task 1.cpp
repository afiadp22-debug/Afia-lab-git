#include<stdio.h>
int main(){
	int marks;
	
	printf("Enter marks(1-100): ");
	scanf("%d", &marks);
	
	if( marks >= 90 ){
		printf("Grade A\n");
		if(marks == 100){
			printf("Perfect Score!");
		}
	}
	else if( marks >= 75 ){
		printf("Grade B");
	}
	else if( marks >= 60 ){
		printf("Grade C");
	}
	else if( marks >= 40 ){
		printf("Grade D");
	}
	else{
		printf("Fail");
	}
	return 0;
	
}




