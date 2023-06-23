#include <stdio.h>

biggest2()
{
    int num1, num2;

    printf("Enter two integers :");
    scanf("%d%d", &num1, &num2);

    if (num1 < num2)
    {
        printf("Largest number is %d.", num2);
    }
    else
    {
        printf("Largest number is %d.", num1);
    }

    //return 0;
}
