#include <stdio.h>
int main ()
{
    int num;
    printf("Enter any number :");
    scanf("%d" ,&num);
    if (num>0)
    {
     printf("The number entered is positive ");
    }
    else if (num<0)
    {
        printf("The number entered is zero ");
        
    }
    else {
        printf("The number entered is 0 ");
    }
    return 0;

    }
