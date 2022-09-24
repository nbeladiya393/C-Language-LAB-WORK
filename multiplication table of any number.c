#include<stdio.h>

main(){
	
	int a=1;
	int n;
	
	printf("Enter the value for multiplication:");
	scanf("%d",&n);
	
	while(a<=10){
		
		printf("%d x %d = %d\n",n,a,n*a);
		a++;
	}
}
