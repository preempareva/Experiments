#include<stdio.h>

int main()
{
    for(int i=1;i<=5;i++)
    {
        printf("hello world \n");
    }

    for(int n=0;n<=10;n++)
    {
        printf("%d \n",n);
    }
    
    for(int n=10;n>=0;--n)
    {
        printf("%d \n",n);
    }

    int j=2;
    for(int i=1;i<=10;i++)
    {
        printf("%d * %d = %d \n",j,i,j*i);
    }

    int i=0,n=10;
    while(i<=n){
        printf("%d\n",i);
        i++;
    }

    return 0;
}