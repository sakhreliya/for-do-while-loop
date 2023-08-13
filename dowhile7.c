#include<stdio.h>
main()
 {
    int y=2000;
    printf("Leap years: \n");

    do {
        if (y%4==0)
		{
            printf("%d\n", y);
        }
        y++;
    } while (y<=3000);
}

