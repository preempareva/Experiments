#include<stdio.h>
#include<math.h>

int main()
{
    float radius;
    printf("Enter radius : ");
    scanf("%f", &radius);
    printf("Area of circle is : %f", 3.14 * radius * radius);
    //takes input r, stores it in variable radius and prints value of 3.14*r*r

    float length;
    float breadth;
    printf("\n\nEnter length: ");
    scanf("%f",&length);
    printf("Enter breadth: ");
    scanf("%f",&breadth);
    printf("perimeter of rectangle is : %f", length + breadth);
    //takes input length and breadth stores its value and prints length + breadth

    float n;
    printf("\n\nEnter number to find its cube : ");
    scanf("%f",&n);
    printf("cube of number is : %f",pow(n,3));
    //takes input n and gives its cube

return 0;
} 