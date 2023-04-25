#include<stdio.h>

main()
{
	int a,n,fact=1;
	printf("Enter any number here: ");
	scanf("%d",&n);
	
	for(a=1;a<=n;a++)
	fact=fact*a;
	
	printf("Factorial of %d is %d",n,fact);
}
