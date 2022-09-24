#include<stdio.h>

main(){
	
	int i=1;
	int fact;
	int n;
	
	// program to find factorial of a number,
	
	printf("Enter your number:");
	scanf("%d",&n);
	
	
	while(i<=n){
		
		fact=fact*i;
		
		i++;
		}
		
		printf("%d",fact);
	}
