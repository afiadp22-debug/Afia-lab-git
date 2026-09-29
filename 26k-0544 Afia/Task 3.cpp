#include<stdio.h>
int main(){
	int w, x, y, z;
	
	printf("Enter four numbers : ");
	scanf("$d $d %d %d", &w, &x, &y, &z);
	
	if( x>y )
	{
		if ( x>z )
		{
			if ( x>w )
			{
				printf("X is largest.\n");
			}
			else
			{
				printf("W is largest.\n");
			}
		}
		
		
	}
	
	
	
	
	
	
	
}
