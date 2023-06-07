#include <stdio.h>

void main()

{
	int a,b,c;
	printf("Enter value of a:");
	scanf("%d",&a);
	
     printf("Enter value of b:");
    scanf("%d",&b);
     printf("Enter value of c:");
	 scanf("%d",&c);
	
	if(a<b){
		if(a<c){
			printf("a is min\n");
			
		}
		else{
			printf("c is min\n");
		}
	}
	else{
		if(b<c){
			printf(" b is min\n");
			
		}
		else{
			printf("c is min\n ");
		}
		
	}
}
