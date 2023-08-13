#include<stdio.h>
main() 
{
    int N,i=1;
    printf("Enter a value :");
    scanf("%d",&N);

    do 
	{
        if (i%2==1) 
		{
            printf("%d\n",i);
        }
        i++;
    } while (i<=N);

}

