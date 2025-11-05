#include<stdio.h>

int main()
{
    int number;
    printf("Enter number (1-100): ");
    scanf("%d",&number);

    if(number % 2 == 0)
    {
        printf("It is a even number");
    }
    else
    {
        printf("it is a odd number");
    }

    if(number >= 30)
    {
        printf("\nStudent has passed");
    }
    else
    {
        printf("\nStudent has failed");
    }

return 0;    
}