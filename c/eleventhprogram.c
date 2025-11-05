#include<stdio.h>

void printstring(char arr[]){
    for(int i=0;arr[i] != '\0';i++){
       printf("%c",arr[i]);
    }
    printf("\n");
}

int main(){
    
    char firstname[] = "PREEM";
    char lastname[] = "PAREVA";

    printstring(firstname);
    printstring(lastname);

    return 0;

}