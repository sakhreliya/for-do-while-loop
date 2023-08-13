#include<stdio.h>
main()
{
	int i,N;
	printf("enter a value N:");
	scanf("%d",&N);
	
	for(i=1;N>=i;N--)
	{
		if(N%2==0)
		{
			printf("%d\n",N);
		}
	}
}
