#include<stdio.h>
main()
{
	int i,N;
	printf("enter value N :");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		if(i%2==1)
		{
			printf("%d\n",i);
		}
	}
	
}
