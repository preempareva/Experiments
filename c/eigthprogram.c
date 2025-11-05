#include<stdio.h>
#include<math.h>

int i;
void printtable(int n){
    for(i=1;i<=10;i++){
    printf("%d * %d = %d\n",i,n,i*n);
    }
}

void calculateprice(float value){
     value = value + (0.18 * value);
     printf("final price with gst is %f\n\n",value);
}

void squarenumber(float s){
    printf("square of number is %f\n\n",pow(s,2));
}

void calculaterectanglearea(float a,float b){
    printf("area of a rectabgle is : %f\n\n",a*b);
}

int main(){
    int n;
    printf("enter number to print table: ");
    scanf("%d",&n);
    printtable(n);

    float value;
    printf("Enter value to find final gst price: ");
    scanf("%f",&value);
    calculateprice(value);
    
    float s;
    printf("enter number to find its square square: ");
    scanf("%f",&s);
    squarenumber(s);
    
    float a,b;
    printf("enter rectangle breadth: ");
    scanf("%f",&a);
    printf("enter rectangle width: ");
    scanf("%f",&b);
    calculaterectanglearea(a,b);
    
    return 0;
}