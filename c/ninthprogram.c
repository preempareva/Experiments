#include<stdio.h>
#include<math.h>

int fact(int n){
    if(n==1){
        return 1;
    }
    int factn1 = fact(n-1);
    int factn = factn1 * n;
    return factn;
}

float convertemp(float celcius){
    float far = (celcius * 1.8) + 32;
    printf("temperature in farenheit is %f",far);
}

int main(){
    int n;
    printf("enter number for factoial: ");
    scanf("%d",&n);
    fact(n);
    printf("factorial is %d\n",fact(n));

    float celcius;
    printf("enter temp in celcius: ");
    scanf("%f",&celcius);
    convertemp(celcius);
    


    return 0;
}