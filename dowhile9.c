#include<stdio.h>
main()
{
	int i=1,n,fact=1;
	printf("enter value N:");
	scanf("%d",&n);
	do
	{
		fact=fact*i;
		i++;
	}
	while(i<=n);
		printf("factorial of %d",fact);
	
}
