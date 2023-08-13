#include<stdio.h>
main()
{
    int N,i=1;
	printf("enter a value :");
	scanf("%d",&N);

    do 
	{
		printf("%d\n",N);
        N--;
    } while (N>= i);

}

