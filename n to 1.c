#include<stdio.h>

main(){
	
	int a=1;
	int n;
	
	printf("Enter your number:");
	scanf("%d",&n);
	
	while(a<=n){
		printf("%d\n",n);
		
		n--;
	}
}
