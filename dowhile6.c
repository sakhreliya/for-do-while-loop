#include<stdio.h>
main() 
{
    int N,i=1;
    printf("Enter a value :");
    scanf("%d", &N);
   
    do
	{
        if (N%2==0)
		{
            printf("%d\n",N);
        }
        N--;
    } while (N>=i);
}

