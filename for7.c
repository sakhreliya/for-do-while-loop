#include<stdio.h>
main()
{
    int y;
    printf("Leap years:\n");

   	for (y=2000;y<=3000; y++) 
	{
        if (y%4==0 )
		{
            printf("%d\n", y);
        }
    }
}

