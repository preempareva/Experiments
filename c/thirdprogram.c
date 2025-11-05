#include<stdio.h>

int main()
{
    int age;
    printf("Enter age : ");
    scanf("%d",&age);
    
    //conditional statement
    if(age>=18)
    {
        printf("you are an adult");
    }
    else if (age>13 && age<18)
    {
        printf("you are a teenager be in your limits");
    }
    else
    {
        printf("sorry you are a child");
    }

    //ternary statement
    //age >=18 ? printf("you are adult") : printf("you are a minor");

    return 0;
}