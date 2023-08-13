#include<stdio.h>
main()
{
	int i=1,n,sum=0;
	printf("enter value N:");
	scanf("%d",&n);
	do
	{
		sum=sum+i;
		i++;
	}
	while(i<=n);
		printf("sum of %d",sum);
	
}
